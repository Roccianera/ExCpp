#ifndef __TABLE_H__
#define __TABLE_H__


#include <iostream>
#include <string>
#include <iomanip>


class Table
{
private:
    int color;
    std::string wood, forniture;
    double price;
public:
    Table(int col=0,std::string wd="quercy",std::string forn="Morocco",double pr=15):
        color{col},wood{wd},forniture{forn},price{pr} {}
    
     virtual bool operator<(const Table & tt)const{
         return this->getArea()<tt.getArea();
     }   
     virtual double  getArea()const =0;
     virtual void   print()const{
         std::cout<< "\ncolore: "<< color<<" , price: "<<price<<std::endl;
     }

    float getPrice()const{return price;}
};



#endif // __TABLE_H__