#ifndef ANIMATION_H
#define ANIMATION_H

#include <GameTexture.h>

class Animation : public GameTexture
{
    public:
        Animation(): GameTexture(){};
        Animation(sf::Texture* texture, sf::IntRect rect): GameTexture(texture, rect){};
        Animation(const Animation& other): GameTexture(other){};
        //TODO: the Holy Trinity is broken, overwrite the equal operator

        void operator=(const Animation& other){
            //NOTE: this compiles but i am unsure if it would work properly, hopfully it calls GameTexture operator
//            *this = other;
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
};

#endif // ANIMATION_H
