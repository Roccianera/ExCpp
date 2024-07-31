#include "Programmer.h"

Programmer::Programmer(std::string name, double cost):
nameofPro{name},costOfwork{cost}{}

bool Programmer::operator<(const Programmer & pp)
{
    return this->costOfwork<pp.costOfwork;
}