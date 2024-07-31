#ifndef STUDENT_H
#define STUDENT_H

#include"Subject.h" 
#include <list>
#include <vector>
class Student
{
public:
    Student(std::string fN="Mario", std::string lN="Rossi", std::string sN="N460045",std::vector<Subject> v={});
    int getCredits();

private:
    std::string firstName,lastName,SerialNumber;
    std::list<Subject> subPassed;
};

#endif