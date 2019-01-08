#ifndef BACKGROUNDOBJ_DYNAMIC_H
#define BACKGROUNDOBJ_DYNAMIC_H

#include <GameOBJ.h>
#include <Animation.h>

class BackGroundOBJ_Dynamic : public GameOBJ, Animation
{
    public:
        BackGroundOBJ_Dynamic() : GameOBJ();
        BackGroundOBJ_Dynamic(sf::Vector2i vec, const sf::Texture& texture, sf::IntRect rect): GameOBJ(vec), Animation(texture, rect){};
        //TODO: write copy C-tor

        virtual ~BackGroundOBJ_Dynamic() = default;

        unsigned int getZ_Index(){
            return z_index;
        };
    private:
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_DYNAMIC_H
