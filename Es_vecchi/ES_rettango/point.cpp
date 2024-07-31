#include <iostream>
#include "point.h"
using std::array;

Point::Point(int p1, int p2){
    setPoint(p1, p2);
}

Point::~Point(){}



void Point::setPoint(int p1, int p2){


    if(p1>=0 && p1>=0 &&  p1<=20&& p2<=20){
        x=p1;
        y=p2;
    } 
    else {
        throw std::invalid_argument("\n Invaild Point");
    }



}

int Point::getX()const{
    return x;
}

int Point::getY()const{
    return y;
}


