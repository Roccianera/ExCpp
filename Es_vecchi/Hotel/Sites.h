#ifndef SITES_H
#define SITES_H

#include "Hotel.h"
#include <vector>
class Sites
{
public:
    Sites();
    void insert_booking( std::string nameClient, int card, Date dd, int cty,);
    void Insert_hotel();
private:
    std::vector<Hotel> hotels;

};



#endif