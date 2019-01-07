#ifndef MENU_STATE_H
#define MENU_STATE_H

#include <I_State_Game.h>

class Menu_State: public I_State_Game
{
    public:
        Menu_State();
        virtual ~Menu_State();

        void Enter(sf::Window& window);
        I_State_Game* HandleInput(sf::Window& window, sf::Event& event);

    private:

};

#endif // MENU_STATE_H
