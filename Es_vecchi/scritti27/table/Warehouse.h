#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "RoundTable.h"
#include "RettangleTable.h"
#include "TriangleTable.h"
#include <list>



class Warehouse
{
public:
    Warehouse();
    void inserOrder(   Table& rhs);
    void summarizeWharehouse()const;
private:

    std::list <Table*> tables;

};

void Warehouse::inserOrder(   Table& rhs)
{

    for (auto iter = tables.begin(); iter !=tables.end() ; iter++)
    {
        if( rhs.getArea()<(*iter)->getArea()) {

            tables.insert(iter,&rhs);
            return;

        }
    }
    
    tables.push_back(&rhs);
}

void Warehouse::sum

#endif