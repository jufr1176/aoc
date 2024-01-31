#include <iostream>
#include "code_1/game.hpp"
#include "code_1/player.hpp"

using namespace std;

int main() {

    Game game;

    game.loadCharacters();
    game.loadLocations();

    game.mainMenu();

    game.menuLoop();

    return 0;
}