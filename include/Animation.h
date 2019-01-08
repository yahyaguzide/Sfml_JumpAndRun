#ifndef ANIMATION_H
#define ANIMATION_H

//////////////////////////////////////////////////////////
// All Textures require an clean Format                 //
// if a texture is not properly made which means,       //
// you need to start at 3 pixel -> Don't Fckng          //
// Use that shet go and find a proper one which lets    //
// you create animation's much more easily              //

#include <SFML/Graphics.hpp>

class Animation : public sf::Sprite
{
    public:
        Animation() = default;
        Animation(const sf::Texture& texture, sf::IntRect rect): sf::Sprite(texture, rect){
            CountSprites();
        };
        /// Copy C-tor calls C-tor of Sprite to set Texture and IntrRect
        Animation(const Animation& other): sf::Sprite(other.getTexture, other.getTextureRect){
            spriteIndex = other.spriteIndex;
            spriteCount = other.spriteCount;
        };
        //TODO: the Holy Trinity is broken, overwrite the equal operator

        void operator=(const Animation& other){
            this.setTexture(other.getTexture());
            this.setTextureRect(other.getTextureRect());

            spriteIndex = other.spriteIndex;
            spriteCount = other.spriteCount;
        };

        virtual ~Animation() = default;

    protected:
        /// Set IntRect to Next Sprite if Texture is smaller than IntRect returns Exception
        /// keep in mind assigning Negative values to IntRect.left or IntRect.top will cause
        /// an Exception
        void NextSprite();

        /// Set IntRect to the Sprite at index e.g index*IntRect.x where if index*Rect.x is bigger than Texture Go on next Line else return error
        /// Uses NextSprite()
        void GoToSprite(int index);

    private:
        // Number of sprites we can have without intersections
        int spriteCount;
        int spriteIndex;

        /// Count Number of sprites we can have without intersection
        void CountSprites();
};

#endif // ANIMATION_H
