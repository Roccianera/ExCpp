#ifndef PACKAGE_H
#define PACKAGE_H

#include <vector>
#include <list>
#include <string.h>
#include <iostream>

#include "Date\Date.h"

class Package
{
public:
    Package(std::string mit,std::string det, int dd, int mm, int yy, double ww  ):
        Mitt{mit},Dest{det},dateOfDelivery{dd,mm,yy}, weight{ww}{}

    Package(std::string mit,std::string det, Date dd, double ww  ):
        Mitt{mit},Dest{det},dateOfDelivery{dd}, weight{ww}{}

    virtual double getPrice()const{ return weight;}

    bool operator<(const Package& rhs){
        return this->dateOfDelivery<rhs.dateOfDelivery;
    }

   virtual void print() const{

       std::cout<< "\n mittente: "<<Mitt<< " Destinatario: "<< Dest;
       std::cout<<" data "<<dateOfDelivery;
       std::cout<<" Peso : " <<weight; 
    }

private:
    std:: string Mitt, Dest;
    Date dateOfDelivery;
    double weight;

};




class Package_Ex: public Package{
private:
    std::string  Nation;
    std::string  continet;

public:
    Package_Ex(std::string mit,std::string det, int dd, int mm, int yy, double ww , std::string nn, std::string cont ):
        Package(mit,det,dd,mm,yy,ww), Nation{nn},continet{cont}{}
    
    Package_Ex(std::string mit,std::string det, Date dd, double ww , std::string nn, std::string cont ):
        Package(mit,det,dd,ww), Nation{nn},continet{cont}{}




    double getPrice()const{
        if(Nation=="USA"|| Nation=="usa")
            return (Package::getPrice() +10);
        

        return (Package::getPrice() +15);
    }

    void print()const{
        Package:: print();
        std::cout<<"\n Nazione "<<Nation <<" Continente: "<< continet;
    }
};



 
#endif