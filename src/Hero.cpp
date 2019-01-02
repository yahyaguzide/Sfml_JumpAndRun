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
//    delete state_;
}

//NOTE: A state Stack could be nice here
void Hero::HandleInput(sf::Event& event){
    I_State_Character*  state_ = StateStack_.back()->HandleInput(*this, event);

    // if the State changes delete old state and point to the next State
    if(state_ != nullptr){
        if((*state_).type() == kill_State_Character){
            // last object gets deleted due to the freeing of the unique_ptr
            StateStack_.pop_back();
        }else{
            // add new State on back
            StateStack_.push_back(std::make_unique(state_));

            // let the State set its Texture and sprite
            StateStack_.back()->Enter();
        }
    }
}

void Hero::update(){
    StateStack_.back()->Update(*this);
}
