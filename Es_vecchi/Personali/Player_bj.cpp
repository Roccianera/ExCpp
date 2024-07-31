#include "Player_bj.h"
#include <sstream>

Player_bj::Player_bj(std::string name): Player_name{name}
{
    srand(time(NULL));
    setCard();
    sum=calcolateSum();
    
}


Player_bj& Player_bj::setCard()
{
    for(int i=0;i<cards.size();i++)
        cards.pop_back();


    cards.push_back( Choice[rand()%13+1]);
    cards.push_back(Choice[rand()%13+1]); 

    return *this;
}

int Player_bj::calcolateSum() const
{
    int sum{0};


    for (int i = 0; i < cards.size(); i++)
    {   
        std::cout <<"\n bug1 "<< cards[i];

        if(cards[i]=="J"||cards[i]=="K"||cards[i]=="Q"){
            sum+=10;
        }
        else{
            std::cout <<"\n bug2 "<< sum<<"\n ";
            int num;

            
            std::stringstream ss;
            ss<< cards[i];
            ss>>num;        
            sum+=num;
            std::cout<<"bug3"<<sum;
        }


    }
    
    return sum;
}

void Player_bj::addCard()
{
    cards.push_back(Choice[rand()%13+1]);
    sum=calcolateSum();
    
}

