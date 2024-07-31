#ifndef STUDENT_H
#define STUDENT_H

#include "Subject.h"
#include<list>
#include <vector>


class Student
{
public:
    Student(std::string fn ,std::string ln, int32_t id):
        firstname{fn},lastname{ln},ID{id} {}
    int getsumCredits()const;
    void Setsubject(Subject&);
    bool operator<(const Student & rhs)const{ return this->getsumCredits()<rhs.getsumCredits();}

private:
    std::string firstname;
    std::string lastname;
    int ID;
    std::list<Subject*> listOfSubject;

};

#endif