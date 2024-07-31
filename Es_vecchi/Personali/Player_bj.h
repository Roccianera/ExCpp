#ifndef PLAYER_BJ_H
#define PLAYER_BJ_H
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <array>
#include <vector>

class Player_bj
{
    public:
        Player_bj(std::string name="PLAYER");
        Player_bj& setCard(); // fatto 


        std::string getCard1()const{ return cards[0];}
        std::string getCard2()const{ return cards[1];}
        std::string getLastCard()const{return cards.back();}


        void setName(std::string name){ Player_name=name;}
        int calcolateSum()const; // fatto 
        int getSum()const{return sum;}
        void addCard();        //fatto


            const std::array<std::string,16> Choice{
            "","1","2","3",
            "4","5","6","7",
            "8","9","10",
            "J", "Q", "K"
        } ;


    private:
        std::string Player_name;
        std::vector<std::string> cards;
        int sum;

};

    #endif