#include "Game.h"
#include "Dice.h"
#include <iostream>

Game::Game() : player1("Player 1"), player2("Player 2"), turn(0) {}

void Game::playTurn() {
    Player& currentPlayer = (turn % 2 == 0) ? player1 : player2;
    std::cout << currentPlayer.getName() << "'s turn (Position: " << currentPlayer.getPosition() << ")\n";
    int roll = Dice::roll();
    std::cout << currentPlayer.getName() << " rolled a " << roll << "\n";
    currentPlayer.move(roll, board);
    std::cout << currentPlayer.getName() << " is at " << currentPlayer.getPosition() << "\n";
}

void Game::startGame() {
    std::cout << "Welcome to the Snake and Ladder game!\n";
    while (player1.getPosition() < 100 && player2.getPosition() < 100) {
        playTurn();
        if (player1.getPosition() == 100) {
            std::cout << "Player 1 wins!\n";
            break;
        }
        if (player2.getPosition() == 100) {
            std::cout << "Player 2 wins!\n";
            break;
        }
        turn++;
    }
}
