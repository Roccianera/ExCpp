
#ifndef  RETTANGOLO_H
#define  RETTANGOLO_H
#include <array>
#include "point.h"


using std::array;

class Rettangolo
{
private:
    array<array<char,25>,25> matrix;
    Point p1,p2,p3,p4;

    
public:
    Rettangolo(int=6,int=18, int=0, int=20 );
    ~Rettangolo();
    void setRettangolo();
    void stampaRettangolo();
    void setPunti(int, int , int , int );
    void getPropieta();
};


#endif