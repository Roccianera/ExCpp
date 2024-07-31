#include "Blackjack.h"
#include<iostream>


Blackjack::Blackjack(std::string pl_name):
profit{0},bet{0}
{
    player.setName(pl_name);
    host.setName("HOST");

}


void Blackjack::Game(){

    std::cout<<"\n INIZIO GIOCO \n";


    bool keep_play{true};
    Status game{CONTINUE};


    while (keep_play)
    {       

            host.setCard();
            player.setCard();

            setBet(15.00);

            std::cout<<"\n L' Host ha in mano "<<host.getCard1()<<" "<<host.getCard2()<<" ";
            std::cout<<host.getSum();

            std::cout<<" \n Tu hai in mano : " << player.getCard1()<<" "<< player.getCard2()  << " ";

            
            std::cout<<player.getSum(); 

            if(player.getSum()>21)
                    game=LOSE;
        while (game==CONTINUE)
        {
            std::cout<<"\n Vuoi chiamare carta  ";
            if(choice()) {
                player.addCard();
                std::cout <<"\n La tua carta aggiunta "<< player.getLastCard() <<" la somma :"<< player.getSum();
            }
            else
                break;

            if(player.getSum()>21)
                game=LOSE;
        }

        if(game!=LOSE){
            std::cout<<"\n L' Host ha in mano "<<host.getCard1()<< " "<< host.getCard2() <<" "<< host.getSum();

            if(host.getSum()>21) 
                    game=WIN;
            else
            {
                if(host.getSum()>player.getSum())
                    game=LOSE;
                else if(host.getSum()==player.getSum()) {
                    game=DRAW;
                }else{
                    game=WIN;
            
                    }          
              }
        }

        StatusGame(game);

        std::cout<<"\n Profitto "<< profit<<"\n Vuoi continuare la partita ";
    
        keep_play=choice();
        game=CONTINUE;

    }

    std::cout<<"\n FINE PARTITA";
    

}

void Blackjack::StatusGame(Status quo) 
{
    switch (quo)
    {
    case WIN:
        std::cout<<" \n Hai vinto ";
        break;
    case LOSE:
        std::cout<<"\n Hai perso ";
        break;
    
    default:
        std::cout<<"\n Hai pareggiato ";
        break;
    }

    setProfit(quo);
}

bool Blackjack::choice()  
{
    char will;
    std::cout << "(y,n) ?: ";
    
    std::cin>>will;

    if(will=='y') return true;

    return false;
    
}



void Blackjack::setProfit(Status p)
{
    if(p==WIN){
        profit+=bet;
    }else{
        if(p==LOSE)
            profit-=bet;
    }
}

