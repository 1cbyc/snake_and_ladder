// Player.cpp
#include "Player.h"

Player::Player(std::string name) : name(name), position(1) {}

void Player::move(int roll, Board& board) {
    int newPosition = position + roll;
    if (newPosition > 100) newPosition = position;
    if (board.isSnake(newPosition)) {
        newPosition = board.getSnakeEnd(newPosition);
    } else if (board.isLadder(newPosition)) {
        newPosition = board.getLadderEnd(newPosition);
    }
    position = newPosition;
}

int Player::getPosition() const {
    return position;
}

std::string Player::getName() const {
    return name;
}
