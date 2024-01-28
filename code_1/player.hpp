#include <iostream>
#include "character.hpp"
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:

        Character character_;

    public:
        //Getters

        Character getCharacter();

        //Setters

        void setCharacter(Character name);
};

#endif