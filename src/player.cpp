#include "player.hpp"

//Getters

Character Player::getCharacter() {
    return character_;
}

//Setters

void Player::setCharacter(Character name) {
    character_ = name;
}