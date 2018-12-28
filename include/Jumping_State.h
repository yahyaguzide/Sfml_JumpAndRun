#ifndef JUMPING_STATE_H
#define JUMPING_STATE_H

#include <I_State_Character.h>

class Jumping_State : public I_State_Character
{
    public:
        Jumping_State(){};
        virtual ~Jumping_State();

        // Override Virtual Functions
        void Enter();
        I_State_Character* HandleInput(Hero& hero, sf::Event& event);
        void Update(Hero& hero);
        I_State_Character* Clone() const { return new Jumping_State(*this); };

    protected:

    private:
};

#endif // JUMPING_STATE_H
