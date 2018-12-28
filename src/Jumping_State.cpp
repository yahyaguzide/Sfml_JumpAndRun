#include "Jumping_State.h"
#include <Standing_State.h>
#include <Ducking_State.h>

Jumping_State::~Jumping_State()
{
    //dtor
}


void Jumping_State::Enter(){
//    Hero.setImage("Jumping");
}

I_State_Character* Jumping_State::HandleInput(Hero& hero, sf::Event& event){
    if(event.key.code == sf::Keyboard::S){
        return new Ducking_State();
    }
    //TODO: find a way to determine if character is back at the ground again
    else{
        return nullptr;
    }
}

void Jumping_State::Update(Hero& hero){
    if(hero.GetCoords().y - GetIntRect().height > 1){
        NextSprite();
    }else{
        GoToSprite(3);
    }
}
