#include<string>
#include "Invoice.h"

Invoice::Invoice(std::string codinz, std::string d,  int q, int p )
    :codice{codinz},descrizione{d},qty{q},prz{p},
        vat{0.2},sconto{0} {

        }

void Invoice:: setCodice(std::string c){

    codice=c;
}
std::string  Invoice::getCodice ()const{
    return codice;
}

void Invoice::setDescrizione(std::string d){
    descrizione=d;
}
std::string Invoice:: getDescrizione() const{
    return  descrizione;
}

void Invoice::setQty(int q){
        qty=q;
        

}
int  Invoice::getQty ()const{
    return qty;

}

void Invoice::setPrz(int p){

    prz=p;
}
int  Invoice::getPrz  ()const{
        return prz;
}

void Invoice::setVat( float v){
  vat=v;
}
float  Invoice::getVat ()const{
    return vat;
}

void Invoice::setSconto( float s){
    sconto=s;

}
float Invoice:: getSconto() const{
    return sconto;
}


float Invoice::getInvoiceAmount(){
    return qty*prz*(1+vat-sconto);
}
