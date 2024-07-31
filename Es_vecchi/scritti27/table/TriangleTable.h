#ifndef __TRIANGLETABLE_H__
#define __TRIANGLETABLE_H__

#include "Table.h"

class TriangleTable : public Table
{
private:
    double base , height;
public:
    TriangleTable (int col, std::string tW, std::string pW, double price, double  b , double h):
        Table{col , tW, pW, price}, base{b},height{h} { }

    virtual double getArea() const {  return (base*height*0.5);}
    virtual std::string toString()const{
        std::ostringstream out;
        out <<Table::toString;
        out<<"\nTavola trinagolare con base :" << base <<" altezza : "<< height;
        return out.str();


    }

};





#endif // __TRIANGLETABLE_H__