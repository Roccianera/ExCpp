#include<string>
#include<iostream>
#include "EletricBill.h"
using std::cout;
using std::endl;



main(){
    EletricBill bolletta{1000};

   //cout<<" \n ss"<< bolletta.getAmountPaid();


    cout<<"\n Ecco quanto killo/h puoi avere merda  "<< bolletta.getUnits()<<endl;



}