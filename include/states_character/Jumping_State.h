#ifndef JUMPING_STATE_H
#define JUMPING_STATE_H

#include <Animation.h>
#include <I_State_Character.h>

class Jumping_State : public I_State_Character, public Animation
{
    public:
        Jumping_State(): jumpingForce(10){};
        Jumping_State(int JumpingForce): jumpingForce(JumpingForce){};
        virtual ~Jumping_State();

        // Override Virtual Functions
        void Enter();
        I_State_Character* HandleInput(Hero& hero, sf::Event& event);
        void Update(Hero& hero);
        I_State_Character* Clone() const { return new Jumping_State(*this); };

    protected:

    private:
        // The Force the Hero put up while Jumping
        int jumpingForce;
};

#endif // JUMPING_STATE_H
