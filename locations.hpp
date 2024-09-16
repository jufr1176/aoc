#include <iostream>
using namespace std;

#ifndef LOCATION_H
#define LOCATION_H

struct LocationArea {

    string name;
    string type;

};

struct Location {

    string name;
    string desc;

    LocationArea locationAreas[10];

    int map[10][10];

    int xStart;
    int yStart;
    
};

#endif