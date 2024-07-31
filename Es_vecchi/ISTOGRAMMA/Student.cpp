#include "Student.h"



int Student::getsumCredits()const{

    int sum{0};
    for (auto iter=listOfSubject.begin(); iter!=listOfSubject.end(); iter++)
    {
        sum+=(*iter)->getCredits();
    }
    return sum;

}

void Student::Setsubject(Subject& sub){

    listOfSubject.push_back(& sub);
}