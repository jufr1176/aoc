#include <iostream>
#include "character.hpp"
#include <fstream>
#include "player.hpp"
#include <vector>
#include <sstream>
#include <limits>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        bool running_;
        string version;

        vector<Character> characters;

        Player player;

    public:

        //Pre Game

        void loadCharacters();

        void printStats(Character character);

        //Game Functions

        void mainMenu();

        void introScreen();

        void characterSelection();

        //Window Functions

        void clearConsole();

        void pauseConsole();
    
};

#endif