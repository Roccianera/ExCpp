#include<iostream>
#include <string.h>
#include <fstream>
#include "Dictionary.h"

using namespace std;


enum class Choice{SEARCH=1, NEW,PRINT,QUIT};


Choice menu();



int main(int argc, char const *argv[])
{


    return 0;
}



Choice menu(){

    cout<< "\n 1 N, 2 D, 3 U , 4 P, 5 Esc : ";
    int number;
    cin>> number ;

    switch (number)
    {
    case 1:
        return Choice::SEARCH;
        break;
    case 2:
        return Choice::NEW;
        break;
    case 3:
        return Choice::PRINT;
        break;
    case 4:
        return Choice::QUIT;
        break;
    default:
        cerr<< " \n Errore : scleta non valida";
        break;
    }

}