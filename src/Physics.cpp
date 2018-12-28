#include "Physics.h"


Physics::Physics()
{
    forceList.push_back(sf::Vector2i(0,9));
}

Physics::Physics(sf::Vector2i force)
{
    forceList.push_back(force);
}


Physics::~Physics()
{
    //dtor
}


void Physics::PushForce(sf::Vector2i force){
    forceList.push_back(force);
}

sf::Vector2i Physics::PopForce(){
    sf::Vector2i vec = forceList.back();
    forceList.pop_back();
    return vec;
}

void Physics::DelForce(int i){
    forceList.erase(forceList.begin()+i);
}

void Physics::ApplyForce(sf::Vector2i& obj, int mass){
    // calculate here sum(F_i) + m*g = m*a where m*g is the first force
    sf::Vector2i sumforces = forceList.front();
    for(auto force = forceList.begin()+1; force != forceList.end(); force++){

        sumforces.x += (*force).x/mass;
        sumforces.y += (*force).y/mass;
    }
}
