#include "Ducking_State.h"
#include <Standing_State.h>

Ducking_State::Ducking_State()
{
    //ctor
}

Ducking_State::~Ducking_State()
{
    //dtor
}


void Ducking_State::Enter(){
//    hero.SetTexture("Ducking")
}

I_State_Character* Ducking_State::HandleInput(Hero& hero, sf::Event& event){
    if( event.type == sf::Event::KeyReleased){
        // Tell Hero that we should return to the previous State
        return nullptr;
    }
    //TODO: Walking, Jumping while Ducking
}
void Ducking_State::Update(Hero& hero){
    NextSprite();
}
