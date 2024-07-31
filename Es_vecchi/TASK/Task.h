#ifndef TASK_H
#define TASK_H

#include "Date\Date.h"
#include <string.h>
#include "Programmer.h"


class Task
{
public:
    Task(std::string name, Date dd,  int hh, Programmer& pp);
    bool  operator<(const Task& tt){ return this->dateOfEnd<tt.dateOfEnd;}
    void print ()const;
private:
    std::string nameOfTask;
    Date dateOfEnd;
    int Hhours; // ore uomo 
    Programmer* programmer;
    friend class Project;
    
};

#endif