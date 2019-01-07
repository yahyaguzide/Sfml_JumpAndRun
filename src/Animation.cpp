#include "Animation.h"

void Animation::CountSprites(){
    spriteCount = (int)(
    ((*getTexture()).getSize().x / getTextureRect().width)
    *
    ((*getTexture()).getSize().y / getTextureRect().height)
                        );
}


/////////////////////////////////////////////////////////
/// \brief changes pos(x, y) to the next sprite which
/// \brief can be set without intersection
///
/////////////////////////////////////////////////////////
void Animation::NextSprite(){

    //////////////////////////////////////////
    // left and top should not be negative
    // coords for a Texture start at left top
    // corner and is non negative value
    if(getTextureRect().left < 0 || getTextureRect().top < 0){
            //TODO: Throw Exception Number is negative
    }else{

        ///////////////////////////////////////////////////////////
        // Check if Texture's size is big enough
        // Texture size is divided by Rect size

        //  TextureWidth/RectWidth
        if( (unsigned)(getTextureRect().left + getTextureRect().width) >= (*getTexture()).getSize().x ){
            // TextureHeight/RectHeight
            if( (unsigned)(getTextureRect().top + getTextureRect().height) >= (*getTexture()).getSize().y){
                //TODO: Throw Exception Next sprite not possible
            }else{
                setTextureRect(sf::IntRect(0, getTextureRect().top + getTextureRect().height,
                                            getTextureRect().height, getTextureRect().width));
            }
        }else{
            setTextureRect(sf::IntRect(getTextureRect().left + getTextureRect().width,
                                        getTextureRect().top, getTextureRect().height, getTextureRect().width));
        }
    }// endElse

    // Increment Sprite index
    spriteIndex = spriteIndex >= spriteCount-1? 0: spriteIndex+1;
}


/////////////////////////////////////////////////////////
/// \brief changes pos(x, y) to the next sprite at index
///
/// \see NextTexture
///
/////////////////////////////////////////////////////////
void Animation::GoToSprite(int index){
    if(index > spriteIndex-1){
        for(int i = spriteIndex; i < index; i += 1){
            NextSprite();
        }
    }else{
        for(int i = spriteIndex; i < spriteCount+index; i += 1){
            NextSprite();
        }
    }
}
