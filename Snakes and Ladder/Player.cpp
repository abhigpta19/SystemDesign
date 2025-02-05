#include "Player.hpp"
using namespace std;

Player::Player(string name ,int position) {
    this->name = name;
    this->position = position;
}

string Player :: getName()
{
    return this->name;
}

void Player :: setName(string name)
{
    this->name = name;
}

int Player :: getPosition()
{
    return this->position;
}

void Player :: setPosition(int position)
{
    this->position = position;
}
