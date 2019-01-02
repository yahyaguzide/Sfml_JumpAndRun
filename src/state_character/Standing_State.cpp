#include "Standing_State.h"
#include <Jumping_State.h>
#include <Ducking_State.h>

Standing_State::Standing_State()
{
    //ctor
}

Standing_State::~Standing_State()
{
    //dtor
}


void Standing_State::Enter(){
//    hero.SetTexture("Standing")
}

I_State_Character* Standing_State::HandleInput(Hero& hero, sf::Event& event){
    if(event.key.code == sf::Keyboard::W){
        return new Jumping_State();
    }else if(event.key.code == sf::Keyboard::S){
        return new Ducking_State();
    }else{
        return nullptr;
    }
}

void Standing_State::Update(Hero& hero){
    // This would be the Idle Animation
    NextSprite();
}
