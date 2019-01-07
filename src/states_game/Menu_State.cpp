#include "Menu_State.h"


void Menu_State::Enter(sf::Window& window){

}

I_State_Game* Menu_State::HandleInput(sf::Window& window, sf::Event& event){
    if(event.type == sf::Event::MouseButtonPressed && event.key.code == sf::Mouse::Left){
            //TODO: find a acceptable way to get the Window Size
//        if(event.mouseButton.x < ){
//
//        }
    }

}
