#ifndef GAMETEXTURE_H
#define GAMETEXTURE_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

//TODO: set IntRect a value

class GameTexture
{
    public:

        //########Constructors are set in the Header
        // for two lines of code the compiler should not open and read the cpp
        GameTexture(): spriteCount(0), spriteIndex(0), gameObjIntRect(sf::IntRect(0,0,10,10)){

            gameObjSprite.setTexture(*gameObjTexture);
            gameObjSprite.setTextureRect(gameObjIntRect);
        };

        GameTexture(sf::Texture* texture): spriteCount(0), spriteIndex(-1), gameObjTexture(texture){
            // if Only Texture is given set Intrect as Texture Size;
            gameObjIntRect = sf::IntRect(0, 0, (*texture).getSize().y, (*texture).getSize().x);

            gameObjSprite.setTexture(*gameObjTexture);
            gameObjSprite.setTextureRect(gameObjIntRect);
        };

        GameTexture(sf::Texture* texture, sf::IntRect rect): spriteCount(0), spriteIndex(-1),
        gameObjTexture(texture), gameObjIntRect(rect){

            gameObjSprite.setTexture(*gameObjTexture);
            gameObjSprite.setTextureRect(gameObjIntRect);
        };

        GameTexture(const GameTexture& other);
        virtual ~GameTexture() = default;

        //#############Getter
        sf::Texture* GetTexture() const;
        sf::Vector2u GetTextureSize() const;
        sf::IntRect GetIntRect() const;

    protected:
        // Number of sprites we can have without intersections
        int spriteCount;
        int spriteIndex;


        //NOTE: Setting repeat on a texture will let all sprites which use this Texture to repeat!!
        /// Activates Repeat in sf::Sprite which means the whole Texture will be Repeated Till IntRect is filled
        void SetRepeat(bool repeat){
            (*gameObjTexture).setRepeated(repeat);
        };

        //############Setter
        void UpdateTexture(sf::Texture* texture);
        void SetRect(sf::IntRect rect);
        void SetRect(int left, int top, int height, int width);

    private:
        /// Count Number of sprites we can have without intersection
        void CountSprites();

        // I could a Smart pointer here but the problem is the following one
        // lets say we have 10 enemies, the Hero goes and kills all of em
        // if i have no pointers left the Texture gets deleted and
        // the enemies which will be created after that have no Texture
        // to set any more

        // NOTE: think about this part a bit more?!
        /// pointer to the Texture used
        sf::Texture* gameObjTexture;
        sf::Sprite gameObjSprite;
        sf::IntRect gameObjIntRect;
};

#endif // GAMETEXTURE_H
