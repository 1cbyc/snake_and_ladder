// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Board.h"

class Player {
public:
    Player(std::string name);
    void move(int roll, Board& board);
    int getPosition() const;
    std::string getName() const;
private:
    std::string name;
    int position;
};

#endif
