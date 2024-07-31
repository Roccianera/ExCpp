#include "Fabric.h"
#include <list>


using namespace std;


int main(int argc, char const *argv[])
{
    Fabric fab;
    RoundTable roundt;
    RettangleTable rett;
    TriangleTable tt;
    fab.insertTable(roundt);
    fab.insertTable(rett);
    fab.insertTable(tt);


    fab.printlist();

    fab.summararizeWharehouse();
    return 0;
}
