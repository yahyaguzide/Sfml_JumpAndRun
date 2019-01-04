#ifndef GAMELOOP_STATE_H
#define GAMELOOP_STATE_H

#include <I_State_Game.h>

class GameLoop_State: public I_State_Game
{
    public:
        GameLoop_State() = default;
        virtual ~GameLoop_State() = default;

        I_State_Game* HandleInput(sf::Event event);

    protected:

    private:
};

#endif // GAMELOOP_STATE_H
