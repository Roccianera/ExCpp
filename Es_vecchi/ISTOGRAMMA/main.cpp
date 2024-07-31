#include <iostream>
#include "Student.h"
#include <vector>
#include <array>
#include <algorithm>

void getIsto(std::vector<Student>&);
int main(int argc, char const *argv[])
{
    std::vector<Student> Students;
    std::vector<Subject> Subjects;

    Subject sub1{"Fondamenti di circuiti","CIRO VISIONE ",9};
    Subject sub2{"Fo di circuiti","CIRO VISIONE ",6};
    Subject sub3{"Fonda","CIRO VISIONE ",4};


    Subjects.push_back(Subject{sub1});
    Subjects.push_back(Subject{sub2});
    Subjects.push_back(Subject{sub3});



    Student s1{"HAMZA","EN Nakhly",1212};
    Student s2{"Enrico","Gentile",1342};
    Student s3{"Giovanni","Mussolini",8845};

    s1.Setsubject(Subjects[0]);
    s1.Setsubject(Subjects[2]);

    s2.Setsubject(Subjects[1]);

    s3.Setsubject(Subjects[0]);

    Students.push_back(s1);
    Students.push_back(s2);
    Students.push_back(s3);
 
    std::sort(Students.begin(),Students.end());

    getIsto(Students);


    return 0;
}



void getIsto(std::vector<Student>& vstudents){


    std::array<int,181> istogramma{};

    for (unsigned i = 0; i < (vstudents.size()); i++)
    {
        int n_credits= vstudents[i].getsumCredits();
        std::cout <<" bug" << n_credits<<std::endl;
        for (int j = 0; j <=n_credits; j++)
        {   
            istogramma[j]++;
        }
        
    }
    
    
    for (int i = 0; i < 50; i++)
    {
        
        std::cout << "\nN.credits: " << i << " Students who have sup: " << istogramma [i];
    }
    


}