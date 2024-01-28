#include <iostream>
#include "character.hpp"
#include <fstream>
#include <vector>
#include <sstream>
#include <limits>
using namespace std;

class Game {
    private:
        bool running_;
        string version;

        vector<Character> characters;

    public:

        //Pre Game

        void loadCharacters();

        //Game Functions

        void mainMenu();

        void introScreen();

        void characterSelection();

        //Window Functions

        void clearConsole();

        void pauseConsole();
    
};