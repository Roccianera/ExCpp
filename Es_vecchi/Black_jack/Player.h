#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "CARD.h"
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>



class Player
{
public:
    Player(std::string nam="Player");

//  void setBet(double b){bet=b;}
//  double getBet()const{ return bet;}

    void  setProfit(double b){ profit =b;}
    double getProfit()const{ return profit;}
    double  getBalance() const{ return balance;}
    void setBalance(double num ){ balance+=num; }
    void setName(std::string nam){Player_name=nam;}
    void SetFirstHand(); // setto la prima mano 
    void printHand();    //  printo la mano 
    bool operator==(const Player&);   // controlla pareggio
    bool operator<(const Player&);  // controlla perdita
    void AddCard();  // aggiungie carta
    void setSum();
    int getSum()const{return sum;}
    void getFirstCard()const {std::cout << Hand[0];}


    

    const std::array<std::string,16> ListCard{

        "","1","2","3",
        "4","5","6","7",
        "8","9","10",
        "J", "Q", "K"
    } ;



private:
    std::string Player_name;
    std::vector<CARD> Hand;
    double profit;
    double balance;
    int sum ;
    

};

#endif