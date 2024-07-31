#ifndef DOCTOR_H
#define DOCTOR_H

#include "Prenotation.h"
#include <queue>

class Doctor
{
public:
    Doctor(std::string fn, std::string ln ):
      firstName{fn},lastName{ln},numberOfAppointment{0}  {}

    bool operator<(const Doctor& lhs)const{ return  this->numberOfAppointment<lhs.numberOfAppointment;  }    
    void addAppointment(Prenotation  copy);
    Doctor & operator=(const Doctor & dc);
    void popAppointement();
    std::string getName()const{return firstName;}
    void print()const{
        std::cout<<"\n Il nome del doc: "<<firstName<< " il numero di prenotazioni :"<<numberOfAppointment;
    }
private:
    std::string firstName;
    std::string lastName;
    
    std::queue<Prenotation> listOfAppointment;
    int numberOfAppointment;
};


void Doctor::addAppointment( Prenotation  copy ){

    listOfAppointment.push(copy);
    numberOfAppointment++;
}

void Doctor::popAppointement(){
    listOfAppointment.pop();
    numberOfAppointment--;
    
}


Doctor & Doctor::operator=(const Doctor & rhs){

    this->firstName=rhs.firstName;
    this->lastName=rhs.lastName;
    this->listOfAppointment=rhs.listOfAppointment;
    this->numberOfAppointment=rhs.numberOfAppointment;

    return *this;
}

#endif