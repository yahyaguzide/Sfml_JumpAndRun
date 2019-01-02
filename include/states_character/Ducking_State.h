#ifndef DUCKING_STATE_H
#define DUCKING_STATE_H

#include <OnGround.h>

class Ducking_State : public OnGround

{
    public:
        Ducking_State();
        virtual ~Ducking_State();

        //TODO: change Hero to Parent Class GameOBJ

        // Override Virtual Functions
        void Enter();
        I_State_Character* HandleInput(Hero& hero, sf::Event& event);
        void Update(Hero& hero);
        I_State_Character* Clone() const { return new Ducking_State(*this); };

    protected:

    private:
};

#endif // DUCKING_STATE_H
