#include "Animation.h"

// Sets Rect to the next Sprite where if Rect.left > Size.x, jump to next Row
sf::IntRect Animation::NextSprite(sf::Vector2u Size, sf::IntRect Rect){

    NextColumn(Size.x, Rect);
    if(Rect.left == 0){
        NextRow(Size.y, Rect);
    }

    return Rect;
}


// uses NextSprite()
sf::IntRect Animation::GoToSprite(sf::Vector2u Size, sf::IntRect Rect, int index){
    // Set Rect to the first Sprite so we can GoTo the Sprite at index
    Rect = sf::IntRect(0, 0, Rect.height, Rect.width);

    for(int i = 0; i < index; i += 1){
        NextSprite(Size, Rect);
    }// endFor

    return Rect;
}

// Sets Rect to next sprite in the Column where if Rect.left > X, jump back to 0
sf::IntRect Animation::NextColumn(unsigned int X, sf::IntRect Rect){

    //////////////////////////////////////////
    // left and top should not be negative
    // coords for a Texture start at left top
    // corner and is non negative value
    if(Rect.left < 0 || Rect.top < 0){
            //TODO: throw Exception number not valid
            //NOTE: Maybe i should not throw a Exception, i should let sprite handle negative Values
    }else{
        if((unsigned int)(Rect.left + Rect.width) > X){
            // jump back to start
            Rect.left = 0;
        }else{
            // Jump to next Column
            Rect.left = Rect.left + Rect.width;
        }// endElse
    }// endElse

    return Rect;
}

// uses NextColumn()
sf::IntRect Animation::GoToColumn(unsigned int X, sf::IntRect Rect, int index){
    // Set Rect to the first Sprite so we can GoTo the Sprite at index
    Rect.left = 0;

    for(int i = 0; i < index; i += 1){
        NextColumn(X, Rect);
    }// endFor

    return Rect;
}

// Sets Rect to next sprite in the Row where if Rect.top > Y, jump back to 0
sf::IntRect Animation::NextRow(unsigned int Y, sf::IntRect Rect){

    //////////////////////////////////////////
    // left and top should not be negative
    // coords for a Texture start at left top
    // corner and is non negative value
    if(Rect.left < 0 || Rect.top < 0){
            //TODO: throw Exception number not valid
            //NOTE: Maybe i should not throw a Exception, i should let sprite handle negative Values
    }else{
        if((unsigned int)(Rect.top + Rect.height) > Y){
            // jump back to Start
            Rect.top = 0;
        }else{
            // Jump to next Row
            Rect.top = Rect.top + Rect.height;
        }// endElse
    }// endElse

    return Rect;
}

// uses NextRow()
sf::IntRect Animation::GoToRow(unsigned int Y, sf::IntRect Rect, int index){
    // Set Rect to the first Sprite so we can GoTo the Sprite at index
    Rect.top = 0;

    for(int i = 0; i < index; i += 1){
        NextRow(Y, Rect);
    }// endFor

    return Rect;
}
