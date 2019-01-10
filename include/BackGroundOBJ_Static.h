#ifndef BACKGROUNDOBJ_STATIC_H
#define BACKGROUNDOBJ_STATIC_H

//////////////////////////////////////////////
// BackGroundOBJ_Static is a Obj which      //
// can't be Animated, so it stays Static    //
// this doesn't mean that it cant be        //
// moved it is after all a Sprite and       //
// can translated like one too              //


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
        // Z_index is a Value which shows how important this OBJ is,
        // the Higher the Value is, later it gets Drawn
        // it means a OBJ with 0 will be shown as behind a OBJ with Z_index higher 0
        unsigned int z_index;
};

#endif // BACKGROUNDOBJ_STATIC_H
