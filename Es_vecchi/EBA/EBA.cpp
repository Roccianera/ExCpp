#include "EBA.h"
#include <fstream>

 EBA::EBA(std::string nameOfFile){

    std::fstream file{nameOfFile,std::ios::in};
    if(!file){
        std::cerr<<"\nFile non aperto ";
        exit(1);
    }

    file>>NumberOfBiscuits;
    int id    ;
    
    std::string name;
    std::string prod;
    std::array<float,PROP_LENGHT> propietes;

    for (int i = 0; i < NumberOfBiscuits; i++)
    {
        file>>id>>name>>prod;

        for (int j = 0; j < PROP_LENGHT; j++)
        {
            file>>propietes[j];
        }
        
        listOfbiscuits.push_back(Biscuits(id,name,prod,propietes));
        
    }
    

    graph=new std::list<int>[NumberOfBiscuits];

    for (int i = 0; i < NumberOfBiscuits; i++)
    {
        for (int j = 0; j < NumberOfBiscuits; j++)
        {
            if(i==j) continue;;
            if(listOfbiscuits[i].EpsilonDistance(listOfbiscuits[j])< Epsilon){
                graph[i].push_back(j);
            }
        }
        
    }
    



 }

 EBA::~EBA(){


    delete[] graph;
 }

 
void EBA::printvett()const{

    for (int i = 0; i < NumberOfBiscuits; i++)
    {
        listOfbiscuits[i].print();
    }
    
}




void EBA::printGraph()const{

    std::cout <<"\n Il grafo :\n";
    for (int i = 0; i < NumberOfBiscuits; i++)
    {   std::cout<<"\n"<<i<<"-> ";
        for (auto iter = graph[i].begin(); iter != graph[i].end(); iter++) 
        {
            std::cout<< *iter<<"-> ";
        }
        
    }
    

}

