#include <iostream>
#include "character.hpp"
#include "item.hpp"
#include "locations.hpp"
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:

        Character character_;
        int x;
        int y;

        int numOfItems = 0;
        Item inventory_[10];

        Location location_;

    public:
        //Getters

        Character getCharacter();
        int getX();
        int getY();
        Item getInventory(int index) {return inventory_[index];}
        Location getLocation() {return location_;}

        //Setters

        void setCharacter(Character name);
        void setX(int x);
        void setY(int y);
        void addInventory(Item item, int numOfItems) {inventory_[numOfItems] = item;}
        void setLocation(Location location) {location_ = location;}
};

#endif