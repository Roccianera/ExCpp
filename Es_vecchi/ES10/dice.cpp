#include <iostream>
#include <cstdlib>
#include <ctime>
using std:: cout;
using std:: endl;

unsigned int RollDice();


main(){


        enum class Status {CONTINUE, WON , LOST};

        srand(static_cast<unsigned int >(time(0)));

        Status gameStatus;
        unsigned int myPoint{0};
        unsigned int sumDice{RollDice()};


        switch (sumDice)
        {
            case 7 :
            case 11:
                gameStatus=Status::WON;

                break;
            case 2:
            case 3:
            case 12:
                gameStatus=Status::LOST;
                break;

            default:
                gameStatus=Status::CONTINUE;
                myPoint=sumDice;
                cout<< "\n mypoint : "<< myPoint<<endl;
                break;
        }
        while (gameStatus==Status::CONTINUE){
            sumDice=RollDice();


            if(sumDice==myPoint){
                
                gameStatus=Status::WON;

            }
            else if(sumDice==7){
                gameStatus=Status::LOST;

            }

        }




            if(gameStatus==Status::WON)
                cout<< "\n Player has won ";
            else
                cout<<"\n Player has lost ";


        }

unsigned int RollDice(){

     int dice1{1+ rand()%6 };
     int dice2{1+ rand()%6 };
     int sum{dice1 + dice2};

    cout << "\n Player rolled " << dice1 <<" + "<< dice2 << " = "<< sum <<endl; 

    return sum ;


}