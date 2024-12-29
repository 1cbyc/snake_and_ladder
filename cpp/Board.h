#ifndef BOARD_H
#define BOARD_H

#include <unordered_map>

class Board {
public:
    Board(int size = 100);
    bool isSnake(int position);
    bool isLadder(int position);
    int getSnakeEnd(int position);
    int getLadderEnd(int position);
private:
    int size;
    std::unordered_map<int, int> snakes;
    std::unordered_map<int, int> ladders;
};

#endif
