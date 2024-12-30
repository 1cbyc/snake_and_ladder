#include <iostream>
#include <cstdlib>
#include <ctime>
// #include "game.h"
#include "../includes/game.h"

int main() {
    srand(time(0));

    SnakeAndLadderGame game;
    game.startGame();

    return 0;
}
