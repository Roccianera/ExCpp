#include "Project.h"


Project::Project(std::string namP, std::string namCl, double imp, Date dd):
nameOfClient{namCl},nameOfProject{namP},import{imp}, Bidate{dd},Endate{dd+60}{}


void Project::insertOrder(  const Task& tt){
    std::list<Task>::iterator it;
    for(it = tasks.begin(); it != tasks.end(); ++it){
        if (*it < tt) {
            break;
        }
    }
    tasks.insert(it,tt);

}

void Project::print() const
{   
    std::cout<<"\nnameofProject:" << nameOfProject<<"\nnameofClient:"<<nameOfClient<<"\ndateofB:"<<Bidate;
    std::cout<<"\nimport: "<<import<<std::endl;
    std::cout << "List of the Tasks: \n";
    for (auto it = tasks.begin(); it != tasks.end(); ++it){

        it->print();
        std::cout<<std::endl;
    }

}



void Project::Developer(Programmer* pp)
{
    int sum{0};


    for (auto it=tasks.begin(); it != tasks.end(); it++)
    {
        
        if(it->programmer==pp){
            sum+=it->Hhours;
        }
    }
    
 std::cout <<"\nnameoOfprogrammer: "  << pp->getName()<< "\nTotal hours: "<< sum<<std::endl;
}

