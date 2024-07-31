#include<iostream>
#include<string.h>
#include"LinkedList.h"
#include<list>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    LinkedList<int> lista;

    srand(time(NULL));


    for (int i = 0; i < 10; i++)
        lista.addFront(rand()%10);


    LinkedList<int> lista2;
    lista2=lista;
    cout<<" "<<lista.toString();

    cout<<" "<<lista2.toString();



    cout<< " posizione " << lista.find(5);



}
