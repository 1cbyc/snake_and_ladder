#include "Board.h"

Board::Board(int size) : size(size) {
    snakes = {{16, 6}, {47, 26}, {49, 11}, {56, 53}, {62, 19}, {64, 60}, {87, 24}, {93, 73}, {95, 75}, {98, 78}};
    ladders = {{1, 38}, {4, 14}, {9, 31}, {21, 42}, {28, 84}, {36, 44}, {51, 67}, {71, 91}, {80, 100}};
}

bool Board::isSnake(int position) {
    return snakes.find(position) != snakes.end();
}

bool Board::isLadder(int position) {
    return ladders.find(position) != ladders.end();
}

int Board::getSnakeEnd(int position) {
    return snakes[position];
}

int Board::getLadderEnd(int position) {
    return ladders[position];
}
