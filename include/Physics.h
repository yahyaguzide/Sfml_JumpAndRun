#ifndef PHYSICS_H
#define PHYSICS_H

#include <stdlib.h>
#include <SFML/System/Vector2.hpp>
#include <vector>

class GameOBJ;

class Physics
{
    public:
        Physics();
        Physics(sf::Vector2i force);
        virtual ~Physics();

        void PushForce(sf::Vector2i force);
        void DelForce(int i);
        sf::Vector2i PopForce();

        void ApplyForce(sf::Vector2i& obj, int mass);

        // Checks if an GameOBJ Collided with other GameOBJ's around him
        std::vector<GameOBJ*> Collision(GameOBJ& gameObj);

    protected:

    private:
        std::vector<sf::Vector2i> forceList;

};

#endif // PHYSICS_H
