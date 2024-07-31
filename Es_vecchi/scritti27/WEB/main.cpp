#include "Page.h"

int main(int argc, char const *argv[])
{

    WEB w(6);
    w.initWeb();
    w.rankUpdate();
    w.printRank();



/*    std::cout<<"\nUpdating ranks..."<<std::endl;
    w.addLink(0,3);
    w.addLink(0,5);
    w.addLink(1,2);
    w.addLink(2,0);
    w.addLink(2,1);
    w.addLink(2,3);
    w.addLink(3,0);
    w.addLink(3,2);
    w.rankUpdate();
    w.printRank();

    w.iterateRank();
    w.printRank();*/

    
    return 0;
}   
