
#ifndef ROUNDTABLE_H
#define ROUNDTABLE_H

#include "Table.h"


class RoundTable: public Table{
public:
    RoundTable(int col=0,std::string wd="quercy",std::string forn="Morocco",double pr=15,double rad=5)
        :Table{col,wd,forn,pr},radius{rad} {}

    virtual double getArea()const{
        return (3.1459*radius*radius);
    }

    virtual void print() const{
        Table::print();
        std::cout <<"\n Raggio :"<< radius<<" Area "<<getArea();
    }

    
private:
    double radius;

};

#endif