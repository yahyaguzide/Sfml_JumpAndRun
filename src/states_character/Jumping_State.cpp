#include "Jumping_State.h"
#include <Standing_State.h>
#include <Ducking_State.h>

Jumping_State::~Jumping_State()
{
    //dtor
}


void Jumping_State::Enter(){
    //TODO: Jumping code Enter
}

I_State_Character* Jumping_State::HandleInput(Hero& hero, sf::Event& event){
    if(event.key.code == sf::Keyboard::S){
        //TODO: add RushDown State
//        return new RushDown_State();
    }

    //TODO: find a way to determine if character is back at the ground again

    return this;
}

void Jumping_State::Update(Hero& hero){
    //TODO: while hero is in the air freeze sprite
    if(hero.GetCoords().y - getTextureRect().height > 1){
        NextSprite();
    }else{
        GoToSprite(3);
    }
}
