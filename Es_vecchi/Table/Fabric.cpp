#include "Fabric.h"

void Fabric::insertTable(Table& tt){
    Table* pp=&tt;
    
    for (auto p = warehouse.begin(); p != warehouse.end(); p++)
    {
        if(pp->getArea()< (*p)->getArea())
        {
            warehouse.insert(p,pp);    
            return;
            
        }        
    }

    warehouse.push_back(pp);

    
}

void Fabric::summararizeWharehouse() const
{
    double sum{0};
    for (auto p = warehouse.begin(); p != warehouse.end(); p++)
    {
        sum+= (*p)->getPrice()*((*p)->getArea());
        
    }


    std::cout<< "\n Total SUM :"<< sum;
    
}

void Fabric::printlist()const{

    for (auto p = warehouse.begin(); p != warehouse.end(); p++)
    {
        (*p)->print();
        std::cout<<std::endl;
    }

}

Fabric::Fabric():
warehouse{}
{
    

}
