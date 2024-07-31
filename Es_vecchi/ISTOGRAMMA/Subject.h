#ifndef SUBJECT_H
#define SUBJECT_H

#include<string.h>
#include<iostream>


class Subject
{
public:
    Subject(std::string Ns="MATH",std::string NP="MARIO",int cR=6) :
        nameOfSub{Ns},nameOfProf{NP},credits{cR} {    }
    int getCredits()const { return credits;}

private:
    std::string nameOfSub;
    std::string nameOfProf;
    int credits;

};


#endif