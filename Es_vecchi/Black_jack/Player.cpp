#include "Player.h"

Player::Player(std::string nam)
{
    srand(time(NULL));
    
    Player_name=nam;
    sum=0;

    SetFirstHand();

    profit=0;
    balance=1000;

}

void Player::SetFirstHand()
{   


    Hand.clear();
    printHand();

    Hand.push_back(ListCard[rand()%13+1]);
    Hand.push_back(ListCard[rand()%13+1]);
    
    setSum();
    
}

void Player::printHand()
{
    for( int i=0 ; i<Hand.size();i++){
        std::cout<<" " << Hand[i];
    }
    std::cout<<" \n ";
}

bool Player::operator==(const Player& Ply)
{
    if(sum==Ply.sum) return true;
    return false;
    
}

bool Player::operator<(const Player&Ply )
{   
    if(sum<Ply.sum) return true;
    return false;
    
}

void Player::AddCard()
{   
    Hand.push_back(ListCard[rand()%13+1]);
    sum+= Hand.back().getValue();
}

void Player::setSum()
{
    sum=0;
    
    for (int i = 0; i < Hand.size() ; i++)
    {
        sum+=Hand[i].getValue();
    }
    
    
}
