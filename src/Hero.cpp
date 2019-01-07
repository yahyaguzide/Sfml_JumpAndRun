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
    for(std::vector<raw_state>::iterator state = StateStack_.begin(); state != StateStack_.end(); state++){
        delete *state;
    }
}


void Hero::HandleInput(sf::Event& event){
    I_State_Character* State_ = StateStack_.back()->HandleInput(*this, event);

    // if we Return the same address of the last active State do nothing
    if(State_ != StateStack_.back()){
        if(State_ != nullptr){
            // Add new State to Stack
            StateStack_.push_back(State_);
            // let the State set its Texture and sprite
            StateStack_.back()->Enter();
        }
        // If Stack is a nullptr delete last State and go back to Previous State
        else if(StateStack_.size() > 0){
                delete StateStack_.back();
                StateStack_.pop_back();
        }
    }
}

void Hero::update(){
    StateStack_.back()->Update(*this);
}
