#include "Task.h"


Task::Task(std::string name, Date dd,  int hh, Programmer& pp):
nameOfTask{name},dateOfEnd{dd},Hhours{hh} ,programmer{&pp}{    
}



void Task::print() const{
    

    std::cout<<" NameofTask : "<<nameOfTask<< " Deadline : "<<dateOfEnd;
    std::cout<<" Number of Hours to complete the Task : "<<Hhours<<" NameofProgrammaer: "<< programmer->getName()<<std::endl;
    

    
}



