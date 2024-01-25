#include "game.hpp"
#include "colors.hpp"

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

void Game::mainMenu() {

    bool menu = true;

    while (menu) {

        clearConsole();

        cout << RED << "AOC: THE GAME" << RESET << endl << endl;

        cout << BLUE << "1) START GAME" << RESET << endl;
        cout << BLUE << "2) EXIT" << RESET << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            menu = false;
            introScreen();
        }
        else if (choice == 2) {
            running_ = false;
            menu = false;
        }


    }
}

void Game::introScreen() {

    cout << "AOC: THE GAME" << endl;

    cout << "Press enter to continue..." << endl;

    cin.get();

    clearConsole();
}