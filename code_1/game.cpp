#include "game.hpp"
#include "colors.hpp"

//Pre Game

void Game::printStats(Character character) {

    cout << endl << YELLOW << "STATS" << RESET << endl << endl;

    cout << "Character: " << character.getName() << endl;
    cout << "Strength: " << character.getStrength() << endl;
    cout << "Charisma: " << character.getCharsima() << endl;
    cout << "Agility: " << character.getAgility() << endl;
    cout << "Luck: " << character.getLuck() << endl;
    cout << "Racism: " << "NULL" << endl;
    cout << "Horniness: " << "NULL" << endl;

}


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

    cout << "The year is 2050, danke milk has run dry from the world's reserves and the world has crumbled. It is nothing but a shell of it's former self. Those who survived the shortage now live in what remains." << endl;
    cout << "AOCIA collapsed in the year 2024, since then many states have formed in it's place, however none have matched it's former glory." << endl;
    cout << "You reside in the settlement of Neu Aocia" << endl;
    pauseConsole();
    clearConsole();

    characterSelection();

}

void Game::characterSelection() {

    cout << "Who are you?" << endl;


    for (int i = 0; i < characters.size(); i++) {
        cout << i+1 << ") " << characters[i].getName() << endl;
    }

    cout << "Choose your character (Number): " << endl << endl;

    int choice;
    cin >> choice;

    //Set Character
    player.setCharacter(characters[choice-1]);

    cout << "You have chosen, " << player.getCharacter().getName() << "." << endl;
    printStats(player.getCharacter());

    pauseConsole();
}