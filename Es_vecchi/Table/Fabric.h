#ifndef FABRIC_H
#define FABRIC_H

#include "RoundTable.h"
#include  "TriangleTable.h"
#include "RettangleTable.h"
#include <list>

class Fabric
{
public:
    Fabric();
    void insertTable(Table& tt);
    void summararizeWharehouse()const;
    void printlist()const;


private:
    std::list<Table*> warehouse;
   

};
#endif
