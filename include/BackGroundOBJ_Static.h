#ifndef BACKGROUNDOBJ_STATIC_H
#define BACKGROUNDOBJ_STATIC_H

#include <SFML/Graphics.hpp>

class BackGroundOBJ_Static : public sf::Sprite
{
    public:
        BackGroundOBJ_Static() : sf::Sprite(){};
        BackGroundOBJ_Static(const sf::Texture texture, sf::IntRect rect): sf::Sprite(texture, rect){};

        virtual ~BackGroundOBJ_Static();

       //#####Setter
        unsigned int SetZ_Index(unsigned int Z_Index){
            z_index = Z_Index;
        };

        //#####Getter
        unsigned int GetZ_Index(){
            return z_index;
        };

    private:
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_STATIC_H
