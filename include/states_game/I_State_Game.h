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

        // Enter sets up the window and draws the menu
        virtual void Enter(sf::Window& window);
        // This method will handle User input's and return if needed the next Object
        virtual I_State_Game* HandleInput(sf::Window& window, sf::Event& event) = 0;
        //TODO: Write a update Method so the Buttons can be interactive


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
