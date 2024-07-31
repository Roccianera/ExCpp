#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Player_bj.h"

class Blackjack
{
public:
    Blackjack(std::string pl_name="PLAYER");
    
    enum Status {WIN, DRAW, LOSE, CONTINUE};
    void Game();  // fatto 


    void setBet(double b){ bet=b;}  
    double getBet()const{return bet;}
    double getProfit()const{return profit;}


    bool continueGame()const; // restituisce se il giocatore vuole continuare a giocare 
    void  StatusGame(Status); // mi dice come comportatmi in caso di Status 
    bool choice() ; // scelgo se continuare con yes or not
    

private:
    double profit;
    double bet;
    Player_bj host;
    Player_bj player;
    void setProfit(Status p);
    



};

#endif