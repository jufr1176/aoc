#include <iostream>
#include "game.hpp"
#include "player.hpp"

using namespace std;

int main() {

    Game game;

    game.loadCharacters();
    game.loadLocations();

    game.mainMenu();

    game.menuLoop();

    return 0;
}