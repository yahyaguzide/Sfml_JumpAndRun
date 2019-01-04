#ifndef INGAMEMENU_STATE_H
#define INGAMEMENU_STATE_H

#include <I_State_Game.h>

class InGameMenu_State: public I_State_Game
{
    public:
        InGameMenu_State() = default;
        virtual ~InGameMenu_State() = default;

        I_State_Game* HandleInput(sf::Event event);

    protected:

    private:
};

#endif // INGAMEMENU_STATE_H
