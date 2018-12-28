#ifndef STANDING_STATE_H
#define STANDING_STATE_H

#include <OnGround.h>

class Standing_State : public OnGround
{
    public:
        Standing_State();
        virtual ~Standing_State();

        //TODO: change Hero to Parent Class GameOBJ

        // Override Virtual Functions
        void Enter();
        I_State_Character* HandleInput(Hero& hero, sf::Event& event);
        void Update(Hero& hero);
        I_State_Character* Clone() const { return new Standing_State(*this); };

    protected:

    private:
};

#endif // STANDING_STATE_H
