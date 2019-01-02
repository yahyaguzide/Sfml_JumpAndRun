#ifndef KILL_STATE_CHARACTER_H
#define KILL_STATE_CHARACTER_H

#include <I_State_Character.h>

class kill_State_Character : public I_State_Character
{
    public:
        kill_State_Character() = default;
        virtual ~kill_State_Character() {};

        void Enter(){};
        I_State_Character* HandleInput(Hero& hero, sf::Event& event){};
        void Update(Hero& hero){};
        I_State_Character* Clone(){};
};

#endif // KILL_STATE_CHARACTER_H
