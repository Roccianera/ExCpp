
#ifndef TriangleTable_H
#define TriangleTable_H

#include "Table.h"


class TriangleTable: public Table{
public:
    TriangleTable(int col=0,std::string wd="quercy",std::string forn="Morocco",double pr=15,double bas=5, double h=3)
        :Table{col,wd,forn,pr},base{bas},height{h} {}

    virtual double getArea()const{
        return (0.5*base*height);
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