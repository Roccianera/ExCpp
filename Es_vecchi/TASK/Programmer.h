#ifndef PROGRAMMER_H
#define PROGRAMMER_H


#include<string.h>
#include <iostream>



class Programmer
{
public:
    Programmer(std::string name, double cost);
    bool operator<(const Programmer &);
    std::string getName()const{ return nameofPro;}
private:
    std::string nameofPro;
    double costOfwork;


};

#endif