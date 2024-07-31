#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <list>
#include <string.h>
#include "Date\Date.h"
#include "Programmer.h"

    class Task {
    private:

        std::string nameOfTask;
        int manhour;   
        Programmer* worker; 
        Date Deadline;
    public:
        friend class Project;
        Task(std::string name, int manH, Date dd , Programmer& pp ):
            nameOfTask{name},manhour{manH},worker{&pp}
                ,Deadline{dd}{}
       bool operator<(const Task& rhs ) { return this->Deadline<rhs.Deadline  ; }
       void print()const{
        std::cout<< " \n Nome : " << nameOfTask << "Nome del programmatore: "<< worker->getName()<<std::endl;
       } 

    };

#endif