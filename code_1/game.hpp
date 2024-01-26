#include <iostream>
#include "character.hpp"
#include <fstream>
#include <vector>
#include <sstream>
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

        void clearConsole();

        void mainMenu();

        void introScreen();
    
};