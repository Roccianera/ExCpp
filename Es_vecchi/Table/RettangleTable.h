
#ifndef RettangleTable_H
#define RettangleTable_H

#include "Table.h"


class RettangleTable: public Table{
public:
    RettangleTable(int col=0,std::string wd="quercy",std::string forn="Morocco",double pr=15,double bas=5, double h=3)
        :Table{col,wd,forn,pr},base{bas},height{h} {}

    virtual double getArea()const{
        return (base*height);
    }

    virtual void print() const{
        Table::print();
        std::cout <<"\n Base:"<< base <<" Height: "<< height<<" Area "<<getArea();
        std::cout<<std::endl;
    }

    
private:
    double base , height ;

};

#endif