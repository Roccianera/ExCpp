#include "Web.h"

int main(int argc, char const *argv[])
{

    Web w(6);

    w.printRanks();
    std::cout<<"Updating ranks..."<<std::endl;
    w.addLink(0,3);
    w.addLink(0,5);
    w.addLink(1,2);
    w.addLink(2,0);
    w.addLink(2,1);
    w.addLink(2,3);
    w.addLink(3,0);
    w.addLink(3,2);
    w.RankUpdate();
    w.printRanks();



    
    return 0;
}   
