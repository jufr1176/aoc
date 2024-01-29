#include <iostream>
#include "character.hpp"
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:

        Character character_;
        int x;
        int y;

    public:
        //Getters

        Character getCharacter();
        int getX();
        int getY();

        //Setters

        void setCharacter(Character name);
        void setX(int x);
        void setY(int y);
};

#endif