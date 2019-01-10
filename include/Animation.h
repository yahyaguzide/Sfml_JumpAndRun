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

        /////////////////////////////////////////////////////////
        /// \brief changes intrect_left Coord to the next sprite at
        /// \brief Row intrect_left + sprite_width
        ///
        /////////////////////////////////////////////////////////
        sf::IntRect NextColumn(unsigned int X, sf::IntRect Rect);
        /////////////////////////////////////////////////////////
        /// \brief changes intrect_left Coord to the next sprite at
        /// \brief Column index
        ///
        /// \see NextColumn
        ///
        /////////////////////////////////////////////////////////
        sf::IntRect GoToColumn(unsigned int X, sf::IntRect Rect, int index);

        /////////////////////////////////////////////////////////
        /// \brief changes intrect_top Coord to the next sprite at
        /// \brief Row intrect_top + sprite_width
        ///
        /////////////////////////////////////////////////////////
        sf::IntRect NextRow(unsigned int Y, sf::IntRect Rect);
        /////////////////////////////////////////////////////////
        /// \brief changes intrect_top Coord to the next sprite at
        /// \brief Row index
        ///
        /// \see NextRow
        ///
        /////////////////////////////////////////////////////////
        sf::IntRect GoToRow(unsigned int Y, sf::IntRect Rect, int index);

        /////////////////////////////////////////////////////////
        /// \brief changes intrect_pos(left, top) to the next
        /// \brief sprite which can be set without intersection
        ///
        /// \see NextRow, NextColumn
        /////////////////////////////////////////////////////////
        sf::IntRect NextSprite(sf::Vector2u Size, sf::IntRect Rect);
        /////////////////////////////////////////////////////////
        /// \brief changes pos(x, y) to the next sprite at index
        ///
        /// \see NextSprite
        ///
        /////////////////////////////////////////////////////////
        sf::IntRect GoToSprite(sf::Vector2u Size, sf::IntRect Rect, int index);

};

#endif // ANIMATION_H
