
#include "EBA.h"





int main(int argc, char const *argv[])
{
    EBA  b{"europeanBiscuits.txt"};

    b.printvett();
    b.printGraph();
    return 0;
}
