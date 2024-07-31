#include "CARD.h"


CARD::CARD(std::string nam)
{
    name=nam;
    value=calculateValute();
    
}

int CARD::calculateValute()
{
    int num{0};    
    if(name=="K"||name=="Q"||name=="J"){
        num=10;
    }else{
        num=stoi(name);
    }


    return num ;
}



std::ostream & operator<<(std::ostream& out , const CARD& c){

    out<<" Carta "<<c.name;
    return out;
}

