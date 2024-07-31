#include <iostream>
#include "TicTacToe.h"




int main(int argc, char const *argv[])
{
    TicTacToe game;
    
    game.startGame();

    /*
    while(true){
        int riga,  colonna;
        
        game.getBoard();
        std::cout<< "\n Player X  inserisci mossa : ";
        std::cin>>riga>>colonna;
        try
        {
        game.setPunto('X',riga,colonna);

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            
        }
        
        if(game.winTTT('X')) break;

        game.getBoard();
        std::cout<< "\n Player O  inserisci mossa : ";
        std::cin>>riga>>colonna;
        try
        {
            game.setPunto('O',riga,colonna);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<std:: endl;
        }
        
        if(game.winTTT('O')) break;

    



    }
    std::cout<<"\n FIne partita "<<std:: endl;
    */
    return 0;
}
