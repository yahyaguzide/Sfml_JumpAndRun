#include "Hero.h"
#include <I_State_Character.h>

Hero::Hero(): GameOBJ(){
    //TODO: Starting State
    //NOTE: Starting State could be Standing or Jumping if the Character should Spawn in the Air

}

Hero::Hero(sf::Vector2i vec): GameOBJ(vec){

}

Hero::Hero(Hero& other): GameOBJ(other){

}

Hero::~Hero(){
    // delete state_ Object
    delete state_;
}

//NOTE: A state Stack could be nice here
void Hero::HandleInput(sf::Event& event){
    I_State_Character*  nextState = state_->HandleInput(*this, event);

    // if the State changes delete old state and point to the next State
    if(nextState != nullptr){
        delete state_;
        state_ = nextState;

        // let the State set its Texture and sprite
        state_->Enter();
    }
}

void Hero::update(){
    state_->Update(*this);
}
