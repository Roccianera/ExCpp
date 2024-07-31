#include "Project.h"

    void Project:: insertOrder ( Task & rhs){

        std::list<Task>::iterator iter;
        for ( iter = listOfTasks.begin(); iter != listOfTasks.end(); iter++)
        {
            if(rhs<*iter) break;
        }
        
        listOfTasks.insert(iter, rhs);

    }
    void Project::print()const{
        for (auto iter = listOfTasks.begin(); iter != listOfTasks.end(); iter++)
        {
            iter->print();
        }
        
    }    

    void Project::workloadDeveloper(Programmer* pp)const{

        double sum{0};

        for (auto iter = listOfTasks.begin(); iter != listOfTasks.end(); iter++)
            if(iter->worker == pp) sum+= iter->manhour;
        
        std::cout << " pro:"<<pp->getName()<<" ore:" << sum;
        
    }