#include "Jumping_State.h"
#include <Standing_State.h>
#include <Ducking_State.h>

Jumping_State::~Jumping_State()
{
    //dtor
}


void Jumping_State::Enter(Hero& hero){
//    Hero.setImage("Jumping");
}

I_State_Character* Jumping_State::HandleInput(Hero& hero, sf::Event& event){
    if(event.key.code == sf::Keyboard::S){
        return new Ducking_State();
    }else if(hero.GetCoords().y - GetTextureSize().y < 1){
        return new Standing_State();
    }else{
    return nullptr;
    }
}

void Jumping_State::Update(Hero& hero){

}
