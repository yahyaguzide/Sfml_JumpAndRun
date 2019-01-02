#ifndef I_STATE_GAME_H
#define I_STATE_GAME_H

//////////////////////////////////////////
// This Interface should describe       //
// the State the Game is Currently in   //
//////////////////////////////////////////


class I_State_Game
{
    public:
        I_State_Game();
        virtual ~I_State_Game();

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
