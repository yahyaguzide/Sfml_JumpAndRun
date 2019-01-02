#ifndef GAMEOBJ_H
#define GAMEOBJ_H

#include <SFML/System/Vector2.hpp>

class GameOBJ
{
    public:
        GameOBJ();
        GameOBJ(sf::Vector2i vec);
        GameOBJ(GameOBJ& other);
        //TODO: the Holy Trinity is broken, overwrite the equal operator

        virtual ~GameOBJ(){};

        //#############Setter
        void SetCoords(int X, int Y);
        void SetCoords(sf::Vector2i vec);

        //#############Getter
        int GetCoordsX();
        int GetCoordsY();
        sf::Vector2i GetCoords();

    protected:


    private:
        sf::Vector2i coords;
};

#endif // GAMEOBJ_H
