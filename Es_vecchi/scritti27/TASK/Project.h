#ifndef PROJECT_H
#define PROJECT_H

#include <iostream>
#include <list>
#include <string.h>
#include "Date\Date.h"
#include "Programmer.h"
#include "Task.h"


class Project
{
public:
    Project(std::string nameP, std::string nameC, double impo, Date ddB, Date ddE):
        nameOfProject{nameP}, nameOfClient{nameC}, import{impo},
            dateBegin{ddB},dateEnd{ddE}{}

    
    void insertOrder ( Task & rhs);
    void print()const;
    void workloadDeveloper( Programmer* pp)const;


    

private:

    std::string nameOfProject;
    std::string nameOfClient;
    double import;
    std::list<Task> listOfTasks;
    Date dateBegin;
    Date dateEnd;
        
};

#endif