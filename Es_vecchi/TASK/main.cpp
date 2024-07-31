#include "Project.h"
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
        Project p{"ProjectK","Mammt",10000,Date(21,05,2022)};

        vector<Programmer> programmatori;

        programmatori.push_back(Programmer("Giovanni ",120));
        programmatori.push_back(Programmer("marco ",150));
        programmatori.push_back(Programmer("Giulia",80));

        sort(programmatori.begin(),programmatori.end());

        Task t1{"t1",Date(12,06,2022),90,programmatori[0]};
        Task t2{"t2",Date(20,06,2022),120,programmatori[0]};
        Task t3{"t3",Date(17,06,2022),30,programmatori[1]};

        p.insertOrder(t1);
        p.insertOrder(t2);
        p.insertOrder(t3);

        p.print();

        p.Developer(&programmatori[0]);








    return 0;
}
