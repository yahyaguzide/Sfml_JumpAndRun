#ifndef HERO_H
#define HERO_H

#include <SFML/Window.hpp>

#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>

class I_State_Character;

class Hero : public sf::Sprite
{
    public:
        Hero();
        Hero(sf::Vector2i vec);
        //NOTE: i dont need to copy a Hero there only can be one
//        Hero(Hero& other);

        virtual ~Hero();

        ////////////////////////////////////////
        /// \brief Handle Upcoming Events
        /// \brief for Hero,
        void HandleInput(sf::Event& event);
        ////////////////////////////////////////
        /// \brief Update Hero,
        /// \brief sets Sprite to Next,
        /// \brief plays the Animation
        void update();

    private:
        typedef I_State_Character* raw_state;

        // vector used as a stack for state's
        std::vector<raw_state> StateStack_;


};

#endif // HERO_H
