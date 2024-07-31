#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string.h>
#include <list>
#include <vector>
#include "Booking.h"


class Hotel
{
public:
    Hotel(std::string nm, int st , double pr);
    void insertOrder(Booking bb);
    bool checkPrenotaion(const Booking & dd);
    int getStar()const{return stars;}
    void view();
    bool operator<(const Hotel & rhs){ return numberofbook< rhs.numberofbook;}
private:
    std::string name;
    int stars;
    double priceforRoom;
    std::list<Booking>  listOfbook;
    int numberofbook;
    

};
Hotel::Hotel(std::string nm, int st , double pr): name{nm} , stars{st}, priceforRoom{pr},
    numberofbook{0}{   
}

void Hotel::insertOrder(Booking bb)
{
    numberofbook++;
    for (auto  iter = listOfbook.begin(); iter != listOfbook.end(); iter++)
    {
        if(bb<*iter){
            listOfbook.insert(iter,bb);
        }
    }

    listOfbook.push_back(bb);
    
}


bool Hotel::checkPrenotaion(const Booking& dd){

    for(auto iter=listOfbook.begin(); iter!=listOfbook.end();iter++){

        if (*iter== dd)
            return false;        
        
    }

    return true;
 }



void Hotel::view(){
    std::cout << "Hotel Name:" << name << " with " << stars << " stars" << std::endl;
    std::cout << "Price for the room:" << priceforRoom << "$" << std::endl;
    std::cout << "List of listOfbook:" << std::endl;
    for (auto it = listOfbook.begin(); it != listOfbook.end(); ++it)
        it->view();

    std::cout << std::endl;
}




#endif