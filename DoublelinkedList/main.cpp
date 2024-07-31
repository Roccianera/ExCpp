#include <iostream>
#include <string>

#include "DList.h"
using namespace std;




int main(int argc, char const *argv[])
{

    cout<<" \n Inizio ";
    DList<int> list;



    list.addFront(13323);
    list.addBack(245);
    list.addBack(332);

    cout <<"\n wew "<<list[1]<<"\n ";
    list.sort();
    cout<<" \n "<< list.toString();
    

    return 0;
}
