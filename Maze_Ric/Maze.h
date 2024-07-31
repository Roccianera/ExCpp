#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include "Position.h"

class Maze
{
public:
    Maze(int, int , int**grid);
    bool Start();
    std::string toString();
    
    ~Maze();

private:
    int **maze;
    int nrow, ncol;
    const int TRIED{8};
    const int PATH{4};
    int Move[8][2] {
        {-1,0},{-1,1},{0,1},{1,1},
        {1,0},{1,-1},{0,-1},{-1,-1}
    };
    bool valMove(int, int );

};

#endif