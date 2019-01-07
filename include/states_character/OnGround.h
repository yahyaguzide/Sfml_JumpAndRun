#ifndef ONGROUND_H
#define ONGROUND_H

#include <Animation.h>
#include <I_State_Character.h>

class OnGround : public I_State_Character, public Animation
{
    public:
        OnGround();
        virtual ~OnGround();

        //TODO: change Hero to Parent Class GameOBJ

        // Override Virtual Functions
//        virtual void Enter(Hero& hero){};
//        virtual I_State_Character* HandleInput(Hero& hero, sf::Event& event);
//        virtual void Update(Hero& hero) = 0;
//        virtual I_State_Character* Clone() const = 0;

    protected:

    private:
//        Physics* physics;
};

#endif // ONGROUND_H
