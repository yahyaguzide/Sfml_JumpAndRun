#ifndef GAMETEXTURE_H
#define GAMETEXTURE_H

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class GameTexture
{
    public:
        GameTexture(): spriteCount(0), spriteIndex(-1){};
        GameTexture(sf::Texture* texture): spriteCount(0), spriteIndex(-1), gameObjTexture(texture){};
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


        //////////////////////////////////////////////////////////////
        // Texture only holds an Pointer to its Texture so it       //
        // can Access it without saving the same Texture again,     //
        // Just the amount of Ground Textures is Huge it would      //
        // be stupid to save the same Texture again and again       //
        // By the way here is my first coding comment picture in Cpp//
        //     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                        //
        // ~~~~~~~ ..................  .....~~~                     //
        // ~~~~~~..................... ......~~                     //
        // ~~~~~~....................   .....~~                     //
        // ~~~~~~....................  ......~~                     //
        // ~~~~~~~.................    ......~~                     //
        // ~~~~~~~~...............     ......~~                     //
        // ~~~~~~~~...............     ......~~                     //
        // ~~~~~~~~.............    .........~~                     //
        // ~~~~~~~~               ~~~~~~~~~~~~~~~                   //
        // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IBM~~~~~~~~             //
        // ~~~~~~~~                                   ~~~~~~        //
        //  ~~~~~~~~~~~~~                                 ~~~~      //
        //   ~~~~~~~~~~~~~~~~~                             ~~~~~    //
        //  ~~~~~~~~~~~~~~~~~~~~~~                          ~~~~~   //
        // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  //
        /////////////////////////////////////////////////////////////

        /// pointer to the Texture used
        sf::Texture* gameObjTexture;
        sf::Sprite gameObjSprite;
        sf::IntRect gameObjIntRect;
};

#endif // GAMETEXTURE_H
