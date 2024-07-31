#ifndef TABLE_H
#define TABLE_H

#include <string.h>
#include <iostream>
#include <sstream>

class Table
{
public:
    Table(int col, std::string tW, std::string pW, double price):
    color{col}, typeOfWood{tW},
         ProducerOfWood{pW},priceForArea{price}{}
    double getPrice()const{return priceForArea;}

    virtual double getTotal()const { return getArea()*priceForArea;}
    virtual  double getArea()const =0;
    virtual  std::string toString()const{
        std::ostringstream out;

        out<<"\n Colore: "<< color << " il tipo di legno : "<< typeOfWood << " Prezzo per area: " << priceForArea << " prezzo totale : "<<getTotal(); 
        return out.str();

  } 
private:
    int color;
    std::string  typeOfWood ;
    std::string  ProducerOfWood ;
    double priceForArea ;

};

#endif