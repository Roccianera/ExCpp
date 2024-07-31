#ifndef RESERVATIONS_H
#define RESERVATIONS_H

#include <string.h>
#include <iostream>
#include "Date\Date.h"

class Reservations
{
public:
    Reservations( std::string nm="Mario", int card=1232431213, int dd=19, int mm=05, int yy=2022 );
    bool operator<(const Reservations& rhs)const;
    

private:
    std::string nameOfClient;
    int   CardofCredit;
    Date dateOfReservsation;
};






Reservations::Reservations(std::string nm, int card, int dd, int mm, int yy )
:nameOfClient{nm},CardofCredit{card},dateOfReservsation{dd,mm,yy}{
    
}



bool Reservations::operator<(const Reservations& rhs)const{

    return this->dateOfReservsation<rhs.dateOfReservsation;
}





#endif