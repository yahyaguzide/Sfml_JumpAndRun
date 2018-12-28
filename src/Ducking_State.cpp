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


void Ducking_State::Enter(Hero& hero){
//    hero.SetTexture("Ducking")
}

I_State_Character* Ducking_State::HandleInput(Hero& hero, sf::Event& event){
    if( event.type == sf::Event::KeyReleased ){
        return new Standing_State();
    }
    //TODO: Walking, Jumping while Ducking
    else{
        return nullptr;
    }
}
void Ducking_State::Update(Hero& hero){

}
