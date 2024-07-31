#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <string.h>
#include <iostream>

class Programmer
{
public:
    Programmer(std::string name , double cos): namew{name},costo{cos}{}
    std::string getName()const {return namew; }
    bool operator<(const Programmer& rhs)const { return this->costo < rhs.costo ;}
    

private:

    std::string namew;
    double costo;

};

#endif