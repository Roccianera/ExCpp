#include <iostream>
#include "Coda.h"



int main(int argc, char const *argv[])
{
    Coda c{4};

    c.enqueue(5);
    c.enqueue(3);
    c.dequeue();
    c.enqueue(7);
    c.enqueue(4);
    c.enqueue(8);
    std::cout<<" \n primo elemento "<<c.front();


    return 0;
}
