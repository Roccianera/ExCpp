#include "Player.h"
#include "Blackjack.h"
#include "CARD.h"
#include <iostream>
#include <string>
#include <cstdlib>

Blackjack::Blackjack (std::string name) {
    
    player.setName(name);
    host.setName("host");
    
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            deck[i][j]=2;
        }
    }
}

void Blackjack::bet(){
    double n;
    bool count{false};

    plate=0;

    do{
    std::cout << "\n quanto vuoi puntare?";
    std::cin >> n;
    if (player.getBalance()< n){
        std::cout << "saldo non disponibile";
    }
    else{
        count=true;
    }
    }while(!count);

    plate=n*2;

}

void Blackjack::game(){

    std::string choice{"si"};
    bool stato={true};


    std::cout<< " \n LA  TUA MANO : \n";
    player.SetFirstHand();
    player.printHand();


    std::cout<< " \n La MANO DEL HOST : \n ";
    host.getFirstCard();




    std::cout << "\n inizio gioco!";
    bet();

    while (stato && choice=="si")
    {
        std::cout << "vuoi chiamare carta:";
        std::cout << "\n si/no: ";
        std::cin>>choice;
        
        if(choice=="si"){
            player.AddCard();
            player.printHand();
            stato=status();
        }
    }
    if(stato){
        std::cout << "\n turno dell'host";
        host.SetFirstHand();
        host.printHand();
        if(host.getSum() < 17 && host.getSum() < 21){
            host.AddCard();
            host.printHand();
        }
        win();
    }else{
        std::cout << "il banco ha vinto";
        host.setBalance(plate);
    }

}

bool Blackjack::status(){
    if(player.getSum() > 21){
        std::cout << "la tua mano ha superato 21! HAI PERSO";
        return false;
    }
    return true;
}

void Blackjack::win(){
    if (player.getSum() > host.getSum()){
        player.printHand();
        host.printHand();
        std::cout << " Hai vinto!!" << std::endl;
        player.setBalance(plate);
    }
    else{
        if(player.getSum() < host.getSum()){
            player.printHand();
            host.printHand();
            std::cout << "Hai Perso;" << std::endl;
            host.setBalance(plate);
        }
        else{
            player.printHand();
            host.printHand();
            std::cout << " Pareggio!!" << std::endl;
            player.setBalance(plate/2);
        }
    }
}

