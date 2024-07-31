#ifndef BLACKJACK_H
#define BLACKJACK_H
#include "Player.h"
#include "CARD.h"
#include <string>

class Blackjack
{
private:
    Player host;
    Player player;
    int deck[4][13];
    std::string symbol[4]{"cuori","quadri","fiori","picche"};
    double plate;
public:
    Blackjack(std::string);
    void bet(); //controllo delle puntate
    void game(); //gioco
    bool status(); //controllo che il gioco procede bene
    void win(); //calcola il vincitore della partita

    double getProfit()const {  return player.getProfit();}
};


#endif 