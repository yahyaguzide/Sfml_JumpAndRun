#ifndef BACKGROUNDOBJ_STATIC_H
#define BACKGROUNDOBJ_STATIC_H

#include <GameOBJ.h>
#include <SFML/Graphics.hpp>

class BackGroundOBJ_Static : public GameOBJ, sf::Sprite
{
    public:
        BackGroundOBJ_Static() : GameOBJ();
//        BackGroundOBJ_Static()
        //TODO: write copy C-tor

        virtual ~BackGroundOBJ_Static() = default;

        unsigned int getZ_Index(){
            return z_index;
        };
    private:
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_STATIC_H
