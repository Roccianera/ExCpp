#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <iostream>
#include <sstream>


class Table
{
public:
    Table(int cd, std::string wd, std::string wdy, double pr);

double virtual getArea()const =0;
    virtual std::string toString()const;

private:
    int cod;
    std::string wood;
    std::string woodguy;
    double price;

};
Table::Table(int cd, std::string wd, std::string wdy, double pr):
    cod{cd}, wood{wd}, woodguy{wdy} , price{pr} {}


std::string Table:: toString() const{

std::ostringstream out;
out<<"cod "<< cod<< " price: "<< price<<std::endl; 
return out.str();
}



#endif