#include <iostream>
#include "Complex.h"


int main(int argc, char const *argv[])
{
    Complex x{3,3};
    Complex y{x};
    Complex z;
    z= x+ y;

    std::cout <<x;

    std::cout <<y;
    std::cout<<std::endl;

    std::cout<< x();
    
    /*Complex y{x};
    Complex z=x+y;
    std::cout<<z;
    std::cout<<std::endl;
    z=x*y;
    std::cout <<z;
    std::cout<<std::endl;
    */
    //Complex y{12,15};

    return 0;
}
