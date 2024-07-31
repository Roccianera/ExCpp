#ifndef  _BISCUITS_H
#define  _BISCUITS_H
#include <cmath>
#include<iostream>
#include <string.h>
#include <array>
#define PROP_LENGHT 10



class Biscuits
{
private:
    int ID;
    std::string name;
    std::string prod;
    std::array<float,PROP_LENGHT> propietes;

public:
    Biscuits(int id,std::string nm, std::string pr, const std::array<float,PROP_LENGHT>& pp):
       name{nm},prod{pr},ID{id},propietes{pp} {}

    float EpsilonDistance(const Biscuits & rhs);
    void  print() const;
};





#endif