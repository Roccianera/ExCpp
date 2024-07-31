#ifndef TTABLE_H
#define TTABLE_H

#include "Table.h"

class TTable  : public Table
{
public:
    TTable(int cd, std::string wd, std::string wdy, double pr, double b, double h);
    double  getArea()const{return (base*height)/2 ;} 
    virtual std::string toString()const;

private:
    double base, height;

};


TTable::TTable(int cd, std::string wd, std::string wdy, double pr, double b, double h)
: Table(cd,wd, wdy, pr), base{b}, height{h} {
    
}

std::string TTable::toString() const
{
    std:: ostringstream out;
    
    out<< Table::toString();
    
    out<<"\n Base: "<< base<<" Height : "<< height << "Area: "<< getArea(); 
}


#endif