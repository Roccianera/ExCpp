#include <iostream>
#include "CList.h"

using namespace std;




 int main(int argc, char const *argv[])
 {
     CList<int> list;
     list.add(1);
     list.add(2).add(3).add(4).add(5);

    cout<<" \n lista NON COPIATA: "<< list.toString();



    CList<int> list2;
    list2=list;
    cout<<" \n lista COPIATA : "<< list2.toString();

    list.reverse();
    cout<<" \n lista REVERSER: "<< list.toString();




     return 0;


 }
 


