#include "Student.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<Subject> subs;
    vector<Student> students;


    subs.push_back(Subject{"s1","d1",6});
    subs.push_back(Subject{"s2","d2",12});
    subs.push_back(Subject{"s2","d3",15});
    
    students.push_back(Student{"rop"," ps","232",{subs[1],subs[2]}});
    students.push_back(Student{"rop2"," ps2","432",{subs[0],subs[2]}});
    students.push_back(Student{"rop3"," ps3","132",{subs[1],subs[0]}});



    return 0;
}
