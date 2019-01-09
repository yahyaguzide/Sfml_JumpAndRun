#ifndef ANIMATION_H
#define ANIMATION_H

//////////////////////////////////////////////////////////
// All Textures require an clean Format                 //
// if a texture is not properly made which means,       //
// you need to start at 3 pixel -> Don't Fckng          //
// Use that shet go and find a proper one which lets    //
// you create animation's much more easily              //

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Rect.hpp>

class Animation
{
    public:
        Animation() = default;
        virtual ~Animation() = default;

        // Sets Rect to next sprite in the Column where if Rect.left > X, jump back to 0
        sf::IntRect NextColumn(unsigned int X, sf::IntRect Rect);
        // uses NextColumn()
        sf::IntRect GoToColumn(unsigned int X, sf::IntRect Rect, int index);

        // Sets Rect to next sprite in the Row where if Rect.top > Y, jump back to 0
        sf::IntRect NextRow(unsigned int Y, sf::IntRect Rect);
        // uses NextRow()
        sf::IntRect GoToRow(unsigned int Y, sf::IntRect Rect, int index);

        // Sets Rect to the next Sprite where if Rect.left > Size.x, jump to next Row
        sf::IntRect NextSprite(sf::Vector2u Size, sf::IntRect Rect);
        // Uses NextSprite()
        sf::IntRect GoToSprite(sf::Vector2u Size, sf::IntRect Rect, int index);

};

#endif // ANIMATION_H
