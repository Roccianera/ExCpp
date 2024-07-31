#ifndef PROJECT_H
#define PROJECT_H
#include <string.h>
#include <list>
#include <iostream>
#include "Date\Date.h"
#include "Task.h"


class Project
{
public:
    Project(std::string namP, std::string namCl, double imp, Date dd);
    void insertOrder(  const Task &  tt);
    
    void print()const;
    void Developer(Programmer* pp);
    
private:
    std::string nameOfProject;
    std::string nameOfClient;
    double import;
    Date Bidate;
    Date Endate;
    std::list<Task> tasks;
};

#endif