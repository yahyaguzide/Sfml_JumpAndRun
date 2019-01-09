#include "Ducking_State.h"
#include <Standing_State.h>
#include <Jumping_State.h>

Ducking_State::Ducking_State()
{
    //ctor
}

Ducking_State::~Ducking_State()
{
    //dtor
}


void Ducking_State::Enter(){
    //TODO: Ducking code Enter
}

I_State_Character* Ducking_State::HandleInput(Hero& hero, sf::Event& event){
    if(event.type == sf::Event::KeyReleased){
        // Tell Hero that we should return to the previous State
        return nullptr;
    }else if(event.key.code == sf::Keyboard::W){
        // if user presses W OnGround returns a new Jumping_State,
        // which will be set as new state
        return new Jumping_State();
    }

    // if no change of State is required returns Null
    return this;
}
void Ducking_State::Update(Hero& hero){
    if(hero.getTexture() != nullptr){
        hero.setTextureRect(NextSprite((*hero.getTexture()).getSize(), hero.getTextureRect()));
    }
}
