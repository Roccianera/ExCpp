#ifndef  POINT_H
#define  POINT_H
#include <array>
#include <stdexcept>


using std::array;

class Point
{
private:
    int x,  y;
    
public:
    Point(int=0 , int=0);
    ~Point();
    void setPoint(int=0 , int=0 );
    int getX()const;
    int getY()const;
    
};


#endif