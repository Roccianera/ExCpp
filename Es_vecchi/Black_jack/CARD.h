#ifndef CARD_H
#define CARD_H
#include <iostream>



class CARD
{
public:
    CARD(std::string="K");


    friend std::ostream & operator<<(std::ostream& out , const CARD&);
    int getValue()const{return value;}
    int calculateValute();


private:
    std::string name;
    int value;


};

#endif