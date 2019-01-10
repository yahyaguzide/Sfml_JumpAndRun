#ifndef STANDING_STATE_H
#define STANDING_STATE_H

#include <Animation.h>
#include <I_State_Character.h>

class Standing_State : public I_State_Character, public Animation
{
    public:
        Standing_State();
        virtual ~Standing_State();

        // Override Virtual Functions
        void Enter();
        I_State_Character* HandleInput(Hero& hero, sf::Event& event);
        void Update(Hero& hero);
        I_State_Character* Clone() const { return new Standing_State(*this); };

    protected:

    private:
};

#endif // STANDING_STATE_H
