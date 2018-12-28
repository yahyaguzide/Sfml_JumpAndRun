#include "Animation.h"

//////////////////////////////////////////////////////////
// All Textures require an clean Format                 //
// if a texture is not properly made which means,       //
// you need to start at 3 pixel -> Don't Fckng          //
// Use that shet go and find a proper one which lets    //
// you create animation's much more easily              //
void Animation::NextSprite(){
    // left and top should not be negative
    // coords for a Texture start at left top corner and is non negative value
    if(GetIntRect().left < 0 || GetIntRect().top < 0){
            //TODO: Throw Exception Number is negative
    }else{
        if((unsigned)(GetIntRect().left + GetIntRect().width) >= GetTextureSize().x){
            if((unsigned)(GetIntRect().top + GetIntRect().height) >= GetTextureSize().y){
                //TODO: Throw Exception rect over Texture
            }else{
                SetRect(0, GetIntRect().top + GetIntRect().height, GetIntRect().height, GetIntRect().width);
            }
        }else{
            SetRect(GetIntRect().left + GetIntRect().width, GetIntRect().top, GetIntRect().height, GetIntRect().width);
        }
    }

    // Increment Sprite index
    spriteIndex = spriteIndex >= spriteCount-1? 0: spriteIndex+1;
}

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
