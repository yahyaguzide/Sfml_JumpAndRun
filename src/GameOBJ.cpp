#include "GameOBJ.h"

GameOBJ::GameOBJ(){
    coords.x = 0;
    coords.y = 0;
}

GameOBJ::GameOBJ(sf::Vector2i vec){
    coords = vec;
}

GameOBJ::GameOBJ(GameOBJ& other){
    coords = other.GetCoords();
}

//############Setter
void GameOBJ::SetCoords(int X, int Y){
    coords.x = X;
    coords.y = Y;
}

void GameOBJ::SetCoords(sf::Vector2i vec){
    coords = vec;
}

//#############Getter
int GameOBJ::GetCoordsX(){
    return coords.x;
}

int GameOBJ::GetCoordsY(){
    return coords.y;
}

sf::Vector2i GameOBJ::GetCoords(){
    return coords;
}
