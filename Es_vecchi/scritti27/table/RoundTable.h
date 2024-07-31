#ifndef __ROUNDTABLE_H__
#define __ROUNDTABLE_H__
#include "Table.h"

class RoundTable : public Table
{
private:
    double radius;
public:
    RoundTable (int col, std::string tW, std::string pW, double price, double  rad):
        Table{col , tW, pW, price}, radius{rad} { }
    
    virtual double getArea() const {  return (3,1459*radius*radius);}
    virtual std::string toString()const{
        std::ostringstream out;
        out <<Table::toString;
        out<<"\nTavola rotonda di raggio :" << radius;
        return out.str();


    }

};


#endif // __ROUNDTABLE_H__