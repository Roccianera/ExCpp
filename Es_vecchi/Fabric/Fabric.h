#ifndef FABRIC_H
#define FABRIC_H

#include "Table.h"
#include "TTable.h"
#include "RettangleTable.h"
#include "RoundTable.h"
#include <list>

class Fabric
{
public:
    Fabric();

private:
    std::list<Table*> listofTable;

};

#endif