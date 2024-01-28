#include "game.hpp"
#include "colors.hpp"

//Pre Game

void Game::loadCharacters() {


    ifstream is("txtFiles/characters.txt");

    if (!is.is_open()) {
        cout << "Failed to open characters.txt";
        running_ = false;
    }

    string line;

    while (getline(is, line)) {

        string name;
        string strength;
        string charisma;
        string agility;
        string luck;
        string perception;

        stringstream ss(line);

        Character newCharacter;

        getline(ss, name, ',');
        getline(ss, strength, ',');
        getline(ss, charisma, ',');
        getline(ss, agility, ',');
        getline(ss, luck, ',');
        getline(ss, perception, ',');

        newCharacter.setName(name);
        newCharacter.setStrength(stoi(strength));
        newCharacter.setCharsima(stoi(charisma));
        newCharacter.setAgility(stoi(agility));
        newCharacter.setLuck(stoi(luck));
        newCharacter.setPerception(stoi(perception));

        characters.push_back(newCharacter);
    }

    is.close();

    
}

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

void Game::pauseConsole() {

    cout << RESET << "Press enter to continue..." << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.sync();
    cin.get();

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

    clearConsole();

    cout << RED << "First they came for Danke, and I said nothing." << endl;
    pauseConsole();

    cout << RED << "Then they came for Serv, and I said nothing." << endl;
    pauseConsole();

    cout << RED << "Then they came for me, and there was no one to help..." << RESET << endl;
    pauseConsole();

}

void Game::characterSelection() {

    cout << "AOC: THE GAME" << endl;

    cout << "Press enter to continue..." << endl;

    //cin.get();

    //clearConsole();

    //Display Characters

    for (int i = 0; i < characters.size(); i++) {
        cout << characters[i].getName() << endl;
    }

    cout << "Choose your character" << endl << endl;

    cin.get();
}