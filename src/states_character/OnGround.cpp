#include "OnGround.h"


#include <Jumping_State.h>

OnGround::OnGround()
{
//    physics = new Physics();
}

OnGround::~OnGround()
{
//    delete physics;
}

I_State_Character* OnGround::HandleInput(Hero& hero, sf::Event& event){
    if(event.key.code == sf::Keyboard::W){
        // if user presses W OnGround returns a new Jumping_State,
        // which will be set as new state
//        return new Jumping_State();
    }

    // if no change of State is required returns Null
//    return nullptr;
}

/// Checks for collisions in every onGround Object
void OnGround::Update(Hero& hero){
    //TODO: Collision onGround
    //physics.collision()
}


