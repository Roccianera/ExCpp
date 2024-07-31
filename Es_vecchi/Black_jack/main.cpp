#include <iostream>
#include "CARD.h"
#include "Player.h"
#include "Blackjack.h"
using namespace std;






int main(int argc, char const *argv[])
{


    cout<<"\n Benvenuto \n";
    Blackjack B{"Osas"};
    bool will{true};
    
    while (will)
    {
        
        B.game();

        int choice;
        cout<< " \n Vuoi continuare ? (1/2) ";
        cin>> choice;
        if(choice==2) 
            will=false;

    }
    
    
    cout <<"\n profito :: "<< B.getProfit(); 

    return 0;
}
