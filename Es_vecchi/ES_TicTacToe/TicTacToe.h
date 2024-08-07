#ifndef TICTATOE_H
#define TICTATOE_H
#include <array>
#include <stdexcept>

using  std::array; // modificare dopo 


class TicTacToe
{
private:
    array<array<char,3>,3> board;
    enum Status{WIN,CONTINUE,DRAW};
public:
    TicTacToe();
    ~TicTacToe();
    Status getStatus(char );// controlla se un player ha vinto 
    bool setPunto(char, int, int); // inserisci la coordinata della mossa
    void getBoard()const; // stampa la board , per ora abbozzo dopo sistemo 
    void startGame();
    bool setMove(char);

    
};




#endif