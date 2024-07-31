#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <string.h>


class Subject
{
public:
    Subject(std::string sN="", std::string pN="", int c=0);
    int getCrediti()const{ return credits;}


private:
    std::string subName, profName;
    int credits;

};

#endif