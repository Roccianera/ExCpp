#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <string.h>
#include <list>
#include <vector>
#include "Date\Date.h"


class Booking
{
public:
    Booking(std::string nm, Date dd);
    bool operator<(const Booking& rhs);
    bool operator>(const Booking& rhs);

    bool operator==(const Booking& rhs);
    void  view();

private:
    std::string name;
    Date dateofBooking;


};

Booking::Booking(std::string nm, Date dd) : name{nm},dateofBooking{dd}{}

bool Booking::operator<(const Booking& rhs)
{
    return this->dateofBooking<rhs.dateofBooking;
}

bool Booking::operator>(const Booking& rhs)
{
    return   rhs.dateofBooking< this->dateofBooking;
}



bool Booking::operator==(const Booking& rhs)
{
    return this->dateofBooking==rhs.dateofBooking;
}

void Booking ::view(){
            std::cout << "name:" << name<< std::endl;
            std::cout << "Date of prenotation:" << dateofBooking << std::endl;
        }



#endif