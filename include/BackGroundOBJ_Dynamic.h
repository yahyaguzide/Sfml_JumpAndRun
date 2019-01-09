#ifndef BACKGROUNDOBJ_DYNAMIC_H
#define BACKGROUNDOBJ_DYNAMIC_H

#include <Animation.h>
#include <SFML/Graphics.hpp>


class BackGroundOBJ_Dynamic : public sf::Sprite
{
    public:
        BackGroundOBJ_Dynamic() : sf::Sprite();
        BackGroundOBJ_Dynamic(const sf::Texture texture, sf::IntRect rect): sf::Sprite(texture, rect){};

        virtual ~BackGroundOBJ_Dynamic();


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
        Animation anim;
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_DYNAMIC_H
