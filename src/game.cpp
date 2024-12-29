#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

SnakeAndLadderGame::SnakeAndLadderGame() {
    player1Pos = 1;
    player2Pos = 1;
    initializeBoard();
}

void SnakeAndLadderGame::initializeBoard() {
    for (int i = 0; i < 100; i++) {
        board[i] = i + 1;
    }

    // Adding some snakes and ladders
    board[2] = 23;
    board[6] = 45;
    board[8] = 11;
    board[20] = 29;
    board[17] = 4;
    board[19] = 7;
    board[21] = 78;
}

void SnakeAndLadderGame::rollDice(int player) {
    int diceRoll = rand() % 6 + 1;
    if (player == 1) {
        player1Pos += diceRoll;
        if (player1Pos > 100) player1Pos = 100;
        player1Pos = board[player1Pos - 1];
    } else {
        player2Pos += diceRoll;
        if (player2Pos > 100) player2Pos = 100;
        player2Pos = board[player2Pos - 1];
    }
}

void SnakeAndLadderGame::movePlayer(int player, int diceRoll) {
    if (player == 1) {
        player1Pos += diceRoll;
        if (player1Pos > 100) player1Pos = 100;
        player1Pos = board[player1Pos - 1];
    } else {
        player2Pos += diceRoll;
        if (player2Pos > 100) player2Pos = 100;
        player2Pos = board[player2Pos - 1];
    }
}

bool SnakeAndLadderGame::isGameOver() {
    return player1Pos == 100 || player2Pos == 100;
}

void SnakeAndLadderGame::displayBoard() {
    std::cout << "Player 1 is at " << player1Pos << "\n";
    std::cout << "Player 2 is at " << player2Pos << "\n";
}

void SnakeAndLadderGame::announceWinner() {
    if (player1Pos == 100) {
        std::cout << "Player 1 wins!" << std::endl;
    } else {
        std::cout << "Player 2 wins!" << std::endl;
    }
}
