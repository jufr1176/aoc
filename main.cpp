#include <iostream>
#include "code_1/game.hpp"
#include "code_1/player.hpp"

using namespace std;

int main(int argc, char **argv[]) {

    Game game;

    game.loadCharacters();

    game.mainMenu();

    return 0;
}