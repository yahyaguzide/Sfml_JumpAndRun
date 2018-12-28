#include "GameTexture.h"

//TODO: Implement Count Properly

GameTexture::GameTexture(const GameTexture& other){
    // Let pointer point to the Texture
    gameObjTexture = other.GetTexture();
    gameObjIntRect = other.GetIntRect();

    // sf::Sprite. setTexture sets the Texture of an sprite
    // where Reset rect will set a Rect the size of the Texture
    gameObjSprite.setTexture(*gameObjTexture);
    gameObjSprite.setTextureRect(gameObjIntRect);

    spriteCount = other.spriteCount;
    spriteIndex = other.spriteIndex;
}

void GameTexture::CountSprites(){
    spriteCount = (int)(GetTextureSize().x / GetIntRect().width) * (int)(GetTextureSize().y / GetIntRect().height);
}

//###########Setter
void GameTexture::UpdateTexture(sf::Texture* texture){
    gameObjTexture = texture;

    gameObjSprite.setTexture(*gameObjTexture);

    if(spriteIndex > -1){
        CountSprites();
    }
}

/// Sets GameTexture's IntRect as rect by Value
void GameTexture::SetRect(sf::IntRect rect){
    gameObjIntRect = rect;

    CountSprites();
}

/// Sets a new IntRect
void GameTexture::SetRect(int left, int top, int height, int width){
    gameObjIntRect = sf::IntRect(left, top, width, height);

    CountSprites();
}


//###########Getter
sf::Texture* GameTexture::GetTexture() const{
    return gameObjTexture;
}

/// returns Texture size as Vector2u in pixels
sf::Vector2u GameTexture::GetTextureSize() const{
    return (*gameObjTexture).getSize();
}

sf::IntRect GameTexture::GetIntRect() const{
    return gameObjIntRect;
}
