#include <string>



class Invoice {
private:
std::string codice;
std::string descrizione;

int qty;
int prz;

float vat;
float sconto;

public:
Invoice(std::string codinz, std::string d,  int q, int p );

void setCodice(std::string c);
std::string  getCodice ()const;

void setDescrizione(std::string d);
std::string  getDescrizione()const;

void setQty(int q);
int  getQty ()const;

void setPrz(int p);
int  getPrz  ()const;

void setVat( float v);
float  getVat ()const;

void setSconto( float s);
float  getSconto()const;


float getInvoiceAmount();


};




