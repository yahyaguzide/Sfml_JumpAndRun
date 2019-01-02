#ifndef HERO_H
#define HERO_H

#include <GameOBJ.h>
#include <kill_State_Character.h>
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

        void HandleInput(sf::Event& event);
        void update();

    private:
        // this pointer is not needed any more, everything will be handled by the vector
//        I_State_Character* state_;
        // vector used as a stack for state's
        std::vector<std::unique_ptr<I_State_Character>> StateStack_;


};

#endif // HERO_H
