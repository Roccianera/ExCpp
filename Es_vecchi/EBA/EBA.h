#ifndef __EBA__H
#define __EBA__H

#include "Biscuits.h"
#include <vector>
#include <list>
class EBA
{
private:
    int NumberOfBiscuits;
    std::vector<Biscuits> listOfbiscuits;
    std::list<int>* graph;
    float  Epsilon{5.0};

public:
    EBA(std::string nameofFile);
    ~EBA();
    void printvett()const;
    void printGraph()const;

};




#endif










