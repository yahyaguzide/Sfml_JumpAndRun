#ifndef HERO_H
#define HERO_H

#include <GameOBJ.h>
#include <SFML/Window.hpp>
#include <string.h>
#include <vector>

class I_State_Character;

class Hero : public GameOBJ
{
    public:
        Hero();
        Hero(sf::Vector2i vec): GameOBJ(vec){};
        Hero(Hero& other);
        virtual ~Hero();

        void HandleInput(sf::Event& event);
        void update();

    protected:


    private:
        I_State_Character* state_;

};

#endif // HERO_H
