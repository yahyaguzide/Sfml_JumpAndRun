#ifndef I_STATE_GAME_H
#define I_STATE_GAME_H

//////////////////////////////////////////
// This Interface should describe       //
// the State the Game is Currently in   //
//////////////////////////////////////////

#include <SFML/Window.hpp>

class I_State_Game
{
    public:
        I_State_Game() = default;
        virtual ~I_State_Game() = default;

        // This method will handle User input's and return if needed the next Object
        virtual I_State_Game* HandleInput(sf::Event event) = 0;


    protected:
        //##########Setter
        void SetLifePoints(unsigned int num);
        void SetHealthPoints(unsigned int num);

    private:
        static unsigned int lifePoints;
        //NOTE: health points should not get reset until the player quits the current Game
        static unsigned int healthPoints;
};

#endif // I_STATE_GAME_H
