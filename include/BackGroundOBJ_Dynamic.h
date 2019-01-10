#ifndef BACKGROUNDOBJ_DYNAMIC_H
#define BACKGROUNDOBJ_DYNAMIC_H

//////////////////////////////////////////////
// BackGroundOBJ_Dynamic is a Obj Which     //
// can be Animated, after Updating this Obj //
// the Next sprite in the Texture will be   //
// shown, it is a Sprite so it can be       //
// easily translated like one               //


#include <Animation.h>
#include <SFML/Graphics.hpp>


class BackGroundOBJ_Dynamic : public sf::Sprite
{
    public:
        BackGroundOBJ_Dynamic() : sf::Sprite();
        BackGroundOBJ_Dynamic(const sf::Texture texture, sf::IntRect rect): sf::Sprite(texture, rect){};

        virtual ~BackGroundOBJ_Dynamic();

        ////////////////////////////////////////
        /// \brief Sets Sprite to Next,
        /// \brief plays Animation
        void Update(){
            if(getTexture() != nullptr){
                setTextureRect(anim.NextSprite((*getTexture()).getSize(), getTextureRect() ));
            }
        };

        //#####Setter
        unsigned int SetZ_Index(unsigned int Z_Index){
            z_index = Z_Index;
        };

        //#####Getter
        unsigned int GetZ_Index(){
            return z_index;
        };

    private:
        // Animation class which Holds the tools to Animate Sprites
        Animation anim;
        // Z_index is a Value which shows how important this OBJ is,
        // the Higher the Value is, later it gets Drawn
        // it means a OBJ with 0 will be shown as behind a OBJ with Z_index higher 0
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_DYNAMIC_H
