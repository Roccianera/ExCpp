#ifndef PRENOTATION_H
#define PRENOTATION_H

#include <iostream>
#include <string.h>
class Prenotation
{
public:
    Prenotation(std::string fn, std::string ln , std::string nm ):
      firstName{fn},lastName{ln},NameOfDoctor{nm} {}
    std::string getDoc(){return NameOfDoctor;}

private:
    std::string firstName;
    std::string lastName;
    std::string NameOfDoctor;
};

#endif