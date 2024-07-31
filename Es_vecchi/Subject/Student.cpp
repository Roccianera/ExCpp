#include "Student.h"


Student::Student(std::string fN, std::string lN, std::string sN,std::vector<Subject> vett)
        :firstName{fN},lastName{lN},SerialNumber{sN}{
    
    for(auto v:vett)
        subPassed.push_back(v);
}


int Student::getCredits(){
    int sum{0};

    for (auto p = subPassed.begin(); p!=subPassed.end(); p++)
    {
        sum+=p->getCrediti();
    }
    

    return sum;
}