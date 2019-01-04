#ifndef SPLASH_STATE_H
#define SPLASH_STATE_H

#include <I_State_Game.h>

class Splash_State : public I_State_Game
{
    public:
        Splash_State();
        virtual ~Splash_State();

        I_State_Game* HandleInput(sf::Event event);

    protected:

    private:
};

#endif // SPLASH_STATE_H
