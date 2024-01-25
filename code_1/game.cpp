#include "game.hpp"

//Game functions

void Game::clearConsole() {
    #ifdef _WIN32
        // For Windows
        system("cls");
    #else
        // For Unix-like systems (including Linux and macOS)
        system("clear");
    #endif
}

void Game::introScreen() {

    cout << "AOC: THE GAME" << endl;

    cout << "Press enter to continue..." << endl;

    cin.get();

    clearConsole();
}