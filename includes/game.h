#ifndef GAME_H
#define GAME_H
#include "../includes/game.h"

class SnakeAndLadderGame {
public:
    SnakeAndLadderGame();
    void startGame();
    void rollDice(int player);
    void movePlayer(int player, int diceRoll);
    bool isGameOver();
    void displayBoard();
    void announceWinner();
    
private:
    int player1Pos;
    int player2Pos;
    int board[100];
    void initializeBoard();
    void displayPlayerPosition(int player);
};

#endif
