#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string.h>
#include <list>
#include "Reservations.h"

class Hotel
{
public:
    Hotel(std::string nm, int cty =3, double pR=80);
    void InsertOrder(const Reservations & Client);
    int getNReserv()const{  return listOfReservations.size();  }

private:
    std::string name;
    int Category;  // 1-5 stelle
    double priceRoom;
    std::list<Reservations> listOfReservations;
    int numReserv;
    friend class Sites;
};

Hotel::Hotel(std::string nm, int cty, double pR)
:name{nm},Category{cty},priceRoom{pR},numReserv{0}
{


}

void Hotel::InsertOrder(const Reservations & Client){

    if(listOfReservations.empty()){

        listOfReservations.push_back(Client);
        return;
    }


    for (auto p = listOfReservations.begin(); p !=listOfReservations.end() ; p++)
    {
        if(Client<*p){
            listOfReservations.insert(p,Client);
            return;
        }
    }
    

    listOfReservations.push_back(Client);

}






#endif