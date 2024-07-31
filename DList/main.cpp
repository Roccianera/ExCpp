
#include <iostream>
#include <string>
#include "DLinkedList.h"

using std::string;
using std::cout;
using std::endl;


int main() {
    DLinkedList<string> l;
    l.addFront("ABC");
    l.addFront("DEF");
    l.addFront("GHI");
    l.addBack("LMN");
    cout<<" \n La size "<< l.size()<<endl;
    cout << l.toString() << endl;
    l.reverseList();
    cout << l.toString() << endl;



    return 0;
}