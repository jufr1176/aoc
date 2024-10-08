#include "game.hpp"
#include "colors.hpp"

//Pre Game

void Game::printStats(Character character) {

    cout << endl << YELLOW << "STATS" << RESET << endl << endl;

    cout << "Character: " << character.getName() << endl;
    cout << "Strength: " << character.getStrength() << endl;
    cout << "Endurance: " << character.getEndurance() << endl;
    cout << "Charisma: " << character.getCharsima() << endl;
    cout << "Intelligence: " << character.getIntelligence() << endl;
    cout << "Agility: " << character.getAgility() << endl;
    cout << "Luck: " << character.getLuck() << endl;
    cout << "Perception: " << character.getPerception() << endl;
    cout << "Racism: " << character.getRacism() << endl;
    cout << "Horniness: " << character.getHorn()  << endl;

}


void Game::loadCharacters() {


    ifstream is("characters.txt");

    if (!is.is_open()) {
        cout << "Failed to open characters.txt";
        running_ = false;
    }

    string line;

    while (getline(is, line)) {

        string name;
        string strength;
        string endurance;
        string charisma;
        string intelligence;
        string agility;
        string luck;
        string perception;
	
	string racism;
	string horn;

        stringstream ss(line);

        Character newCharacter;

        getline(ss, name, ',');
        getline(ss, strength, ',');
        getline(ss, endurance, ',');
        getline(ss, charisma, ',');
        getline(ss, intelligence, ',');
        getline(ss, agility, ',');
        getline(ss, luck, ',');
        getline(ss, perception, ',');
	getline(ss, racism, ',');
	getline(ss, horn, ',');

        newCharacter.setName(name);
        newCharacter.setStrength(stoi(strength));
        newCharacter.setEndurance(stoi(endurance));
        newCharacter.setCharsima(stoi(charisma));
        newCharacter.setAgility(stoi(agility));
        newCharacter.setIntelligence(stoi(intelligence));
        newCharacter.setLuck(stoi(luck));
        newCharacter.setPerception(stoi(perception));
	newCharacter.setRacism(stoi(racism));
	newCharacter.setHorn(stoi(horn));

        characters.push_back(newCharacter);
    }

    is.close();

    
}

void Game::copyMatrix(int giverArray[][10], int recieverArray[][10]) {

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
            recieverArray[i][j] = giverArray[i][j];
        }

    }
}

void Game::loadLocations() {

    Location Aocia;
    Aocia.desc = "A decimated village. Rubble lays everywhere, in some places people. Your home still stands on the outskirts.";
    Aocia.name = "Aocia";
    
    int aociaMap[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,3},
        {1,0,0,0,0,0,0,0,0,3},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1},
    };

    Aocia.xStart = 8;
    Aocia.yStart = 5;

    copyMatrix(aociaMap, Aocia.map);
    
    locations_.push_back(Aocia);


    Location Clock_Town;
    Clock_Town.desc = "One of the region's largest villages. A center for commerce and arts.";
    Clock_Town.name = "Clock Town";
    
    int Clock_Town_Map[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {3,0,0,0,0,0,0,0,0,1},
        {3,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,1,1,1,1,1,1,1,1,1},
    };

    Clock_Town.xStart = 1;
    Clock_Town.yStart = 5;

    copyMatrix(Clock_Town_Map, Clock_Town.map);
    
    locations_.push_back(Clock_Town);

    Location Ruins_of_Aocia;
    Ruins_of_Aocia.desc = "The ruins of Old Aocia, once compared to the Roman Empire of Antiquity, it now lays in ruin.";
    Ruins_of_Aocia.name = "Ruins of Old Aocia";
    
    int Ruins_of_Aocia_Map[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,0,0,1,1,1,0,1,0,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,1,1,0,0,0,0,1},
        {1,0,0,1,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,1,1,1,3,3,1,1,1,1},
    };

    Ruins_of_Aocia.xStart = 6;
    Ruins_of_Aocia.yStart = 9;

    copyMatrix(Ruins_of_Aocia_Map, Ruins_of_Aocia.map);
    
    locations_.push_back(Ruins_of_Aocia);

    Location The_Valley;
    The_Valley.desc = "A small village between two mountain ranges. A land of peace and cooperation.";
    The_Valley.name = "The Valley";
    
    int The_Valley_Map[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1,0,1},
        {1,1,1,1,3,3,1,1,1,1},
    };

    The_Valley.xStart = 6;
    The_Valley.yStart = 9;

    copyMatrix(The_Valley_Map, The_Valley.map);
    
    locations_.push_back(The_Valley);

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

// void Game::menuLoop() {

//     while (running_) {
    
//         clearConsole();

//         cout << "LOCATION: " << BLUE << player.getLocation().name << RESET << endl;
//         cout << "HP: " << player.getCharacter().getHp() << endl << endl;

//         cout << "1) Go somewhere" << endl;
//         cout << "2) Talk to someone" << endl;
//         cout << "3) Investigate Area" << endl;
//         cout << "4) Where am I?" << endl;
//         cout << "5) Leave area" << endl;

//         int choice;
//         cin >> choice;

//         switch(choice) {


//             case 5: {
//                 clearConsole();

//                 cout << "Where do you want to go?" << endl << endl;

//                 for (int i = 0; i < locations_.size(); i++) {
//                     cout << i + 1 << ") " << locations_[i].name << endl;
//                 }

//                 int choice;
//                 cin >> choice;

//                 if (choice > locations_.size()) {
//                     while (choice > locations_.size()) {
//                         cout << "Invalid selection, try again" << endl;
//                         cin >> choice;
//                     }
//                 }

//                 player.setLocation(locations_[choice - 1]);

//                 break;
//             }

//             case 4: {
//                 clearConsole();
//                 cout << "AREA: " << player.getLocation().name << endl << endl;

//                 cout << player.getLocation().desc << endl;
//                 pauseConsole();

//                 break;
//             }

//             default: {
//                 cout << "Invalid selection, try again" << endl;
//                 pauseConsole();
//             }

//         } //Switch Statement

//     } //While LOop
    
// }

void Game::drawLocation() {

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (player.getLocation().map[i][j] == 1) {
                cout << " # ";
            }
            else if (player.getX() == j && player.getY() == i) {
                cout << " o ";
            }
            else {
                cout << "   ";
            }

        }

        cout << endl;

    }
}

//MANAGE ALL PLAYER COLLISIONS WITH THINGS ON THE MAP AND MOVE PLAYER
void Game::movePlayer(int x, int y) {

    //Check if the player will hit a wall, if yes, dont move them // COLLISION
    if ( player.getLocation().map[player.getY() + y][player.getX() + x] == 1) {
        //Pass
    }
    //CHECK IF PLAYER LEAVES AREA AND LET THEM SELECT NEW AREA
    else if (player.getLocation().map[player.getY() + y][player.getX() + x] == 3) {
        clearConsole();

        cout << "Where do you want to go?" << endl << endl;

        for (int i = 0; i < locations_.size(); i++) {
            cout << i + 1 << ") " << locations_[i].name << endl;
        }

        int choice;
        cin >> choice;

        if (choice > locations_.size()) {
            while (choice > locations_.size()) {
                cout << "Invalid selection, try again" << endl;
                cin >> choice;
            }
        }

        player.setLocation(locations_[choice - 1]);
        player.setX(player.getLocation().xStart);
        player.setY(player.getLocation().yStart);

    }
    //MOVE PLAYER
    else {
        player.setX(player.getX() + x);
        player.setY(player.getY() + y);
    }

}

void Game::menuLoop() {

    while (running_) {
    
        clearConsole();

        cout << "LOCATION: " << BLUE << player.getLocation().name << RESET << endl;
        cout << "HP: " << player.getCharacter().getHp() << endl << endl;

        drawLocation();

        cout << "(a, w, s, d): ";

        char choice;
        cin >> choice;

        switch (choice) {
            case 'a': {
                movePlayer(-1, 0);
                break;
            }
            case 'w': {
                movePlayer(0, -1);
                break;
            }
            case 's': {
                movePlayer(0, 1);
                break;
            }
            case 'd': {
                movePlayer(1, 0);
                break;
            }
            default: {
                //Pass
            }
        }

        

    } //While LOop
    
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

    attackOnAocia();

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

void Game::attackOnAocia() {

    clearConsole();

    cout << "It was a peaceful day in Aocia, birds chirped in the distance, the smell of hope filled the air. Sure, the danke milk was gone, but today it didn't matter to you." << endl;
    cout << "You stand in your home in Aocia Village awaiting an exciting day. You are going to go and see Charlie today after you run some errands." << endl;

    pauseConsole();
    cout << endl;

    cout << RED << "..." << RESET << endl;
    pauseConsole();
    cout << RED << "..." << RESET << endl;
    pauseConsole();

    cout << RED << "The sound of horses gallop in the distance" << RESET << endl;
    pauseConsole();
    cout << endl;

    cout << "The village bell sounds! What is happening?" << endl;
    cout << "In a panic, you run outside, the sounds of men shouting echo in the distance..." << endl;
    pauseConsole();
    cout << endl;

    cout << "It can only mean one thing. The Romanians..." << endl;
    pauseConsole();
    cout << endl;

    cout << "You panick, run into your house, and hide in ur closet..." << endl;
    cout << "As you curl into a ball in the darkness, you hear the sounds of war just a feet away..." << endl;
    pauseConsole();
    cout << endl;

    cout << RED << "..." << endl;
    pauseConsole();
    cout << RED << "..." << endl;
    pauseConsole();
    cout << RED << "..." << endl;
    pauseConsole();

    cout << endl;

    cout << RED << "AHHHHHHHHHHH" << endl;
    cout << RED << "Help!!!!" << endl;
    cout << RED << "Ove- The-!!!" << endl;
    cout << RED << "Trăiască Estul!" << endl;

    pauseConsole();
    cout << endl;
    clearConsole();

    cout << RESET << "Many hours pass in that room, and the noises subside with time" << endl;
    cout << "Finally, hours later, you leave from your home, only to be met with destruction..." << endl;

    player.setLocation(locations_[0]);
    player.setX(player.getLocation().xStart);
    player.setY(player.getLocation().yStart);
}
