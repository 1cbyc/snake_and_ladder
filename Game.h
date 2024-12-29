#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Board.h"

class Game {
public:
    Game();
    void playTurn();
    void startGame();
private:
    Board board;
    Player player1;
    Player player2;
    int turn;
};

#endif
