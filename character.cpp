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

void Character::setIntelligence(int intelligence) {
    intelligence_ = intelligence;
}

void Character::setAgility(int agility) {
    agility_ = agility;
}

void Character::setEndurance(int endurance) {
    endurance_ = endurance;
}

void Character::setLuck(int luck) {
    luck_ = luck;
}

void Character::setPerception(int perception) {
    perception_ = perception;
}

void Character::setRacism(int racism) {
    racism_ = racism;
}

void Character::setHorn(int horn) {
    horn_ = horn;
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

int Character::getIntelligence() {
    return intelligence_;
}

int Character::getEndurance() {
    return endurance_;
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

int Character::getRacism() {
    return racism_;
}

int Character::getHorn() {
   return horn_;
}
