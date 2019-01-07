#ifndef HERO_H
#define HERO_H

#include <GameOBJ.h>
#include <SFML/Window.hpp>

#include <memory>
#include <vector>

class I_State_Character;

class Hero : public GameOBJ
{
    public:
        Hero();
        Hero(sf::Vector2i vec);
        Hero(Hero& other);
        //TODO: the Holy Trinity is broken, overwrite the equal operator

        virtual ~Hero();

        typedef I_State_Character* raw_state;

        void HandleInput(sf::Event& event);
        void update();

    private:
        // vector used as a stack for state's
        std::vector<raw_state> StateStack_;


};

#endif // HERO_H
