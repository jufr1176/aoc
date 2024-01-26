#include "character.hpp"

void Character::setName(string name) {
    name_ = name;

}
void Character::setHp(int hp) {
    hp_ = hp;
}

void Character::setStrength(int strength) {
    strength_ = strength;
}

void Character::setCharsima(int charisma) {
    charisma_ = charisma;
}

void Character::setAgility(int agility) {
    agility_ = agility;
}

void Character::setLuck(int luck) {
    luck_ = luck;
}

void Character::setPerception(int perception) {
    perception_ = perception;
}

//Getters

string Character::getName() {
    return name_;

}
int Character::getHp() {
    return hp_;
}

int Character::getStrength() {
    return strength_;
}

int Character::getCharsima() {
    return charisma_;
}

int Character::getAgility() {
    return agility_;
}

int Character::getLuck() {
    return luck_;
}

int Character::getPerception() {
    return perception_;
}