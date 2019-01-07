#ifndef I_STATE_CHARACTER_H
#define I_STATE_CHARACTER_H

//////////////////////////////////////////
// This Interface should describe       //
// the State the Hero is Currently in   //
//////////////////////////////////////////

#include <SFML/Window.hpp>
#include <Hero.h>

class I_State_Character
{
    public:
        I_State_Character() = default;
        virtual ~I_State_Character() = default;

        // Loads Texture and sets up sprite
        virtual void Enter() = 0;
        // Method to Handle Events
        virtual I_State_Character* HandleInput(Hero& hero, sf::Event& event) = 0;
        // Method to Update Hero
        virtual void Update(Hero& hero) = 0;
        //NOTE: I forgot what i wanted to do with this
        virtual I_State_Character* Clone() const = 0;
};

#endif // I_STATE_CHARACTER_H
