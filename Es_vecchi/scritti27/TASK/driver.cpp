#include <iostream>

#include "Programmer.h"
#include "Project.h"
#include <vector>
#include <algorithm>
using  namespace std;

int main(int argc, char const *argv[])
{
        Project p{"ProjectK","Mammt",10000,Date(21,05,2022),Date(21,9,2022)};

        vector<Programmer> programmatori;

        programmatori.push_back(Programmer("Giovanni ",120));
        programmatori.push_back(Programmer("marco ",150));
        programmatori.push_back(Programmer("Giulia",80));

        sort(programmatori.begin(),programmatori.end());

        Task t1{"t1",90,Date(12,06,2022),programmatori[0]};
        Task t2{"t2",120,Date(20,06,2022),programmatori[0]};
        Task t3{"t3",30,Date(17,06,2022),programmatori[1]};

        p.insertOrder(t1);
        p.insertOrder(t2);
        p.insertOrder(t3);

        p.print();

        p.workloadDeveloper(&programmatori[0]);





    
    return 0;
}


