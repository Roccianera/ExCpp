#include <iostream>
#include "BST.h"


using namespace std;



int main(int argc, char const *argv[])
{
    BST<int> b;
    b.insert(5);
    b.insert(7);
    b.insert(3);
    b.insert(2);
    b.inorderTreeWalk();


    if (b.search(10)!= nullptr) 
        cout<<" \n Trovato ";
    else
        cout<<" \n Non trovato ";
    
    



    return 0;
}

