#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(int xx=0,int yy=0,int dd=0):x{xx},y{yy},dir{dd}{}

private:
    int x;
    int y;
    int dir; // 0-7
    
    friend class Maze;
};

#endif