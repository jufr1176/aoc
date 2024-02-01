#include <iostream>
#include "character.hpp"
#include <fstream>
#include "player.hpp"
#include "locations.hpp"
#include <vector>
#include <sstream>
#include <limits>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        bool running_ = true;
        string version;

        vector<Character> characters;
        vector<Location> locations_;

        Player player;

    public:

        //Pre Game

        void loadCharacters();

        void loadLocations();

        void printStats(Character character);

        //Game Functions

        void mainMenu();

        void introScreen();

        void characterSelection();

        void menuLoop();

        void drawLocation();

        //Window Functions

        void clearConsole();

        void pauseConsole();

        void copyMatrix(int giverArray[][10], int recieverArray[][10]);

        //Cutscenes

        void attackOnAocia();
    
};

#endif