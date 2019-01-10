#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>

//TODO: write Button
//NOTE: i dont want all methods in Sprite, some of them are not needed for a Button, private will ensure that

class Button : private sf::Sprite
{
    public:
        Button(): sf::Sprite(){};
        Button(const sf::Texture& texture): sf::Sprite(texture){
            // Set Rect as Texture size
            // you cant simply have a part of the Button
            setTextureRect(sf::IntRect(0, 0, texture.getSize().y, texture.getSize().x));
        };
        virtual ~Button();

        //////////////////////////////////////////////
        /// \brief Update the Texture
        void setBtnTexture(const sf::Texture& texture){
            // set texture and Reset Rect to match the height and width
            // of the New Texture
            setTexture(texture, true);
        };

        //////////////////////////////////////////////
        /// \brief Return a pointer to the Texture
        const sf::Texture* getBtnTexture(){
            return getTexture();
        };

        //////////////////////////////////////////////
        /// \brief sets a color for the sprite
        /// \brief can be used to change opacity
        void setBtnColor(cons sf::Color& color){
            setColor(color);
        };

        //////////////////////////////////////////////
        /// \brief returns color of the Btn
        const sf::Color& getBtnColor(){
            return getColor();
        };

    private:
};

#endif // BUTTON_H
