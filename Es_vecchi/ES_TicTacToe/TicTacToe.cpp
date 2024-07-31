#include<iostream>
#include "TicTacToe.h"




TicTacToe::TicTacToe()
{
    for(int i{0};i<3;i++) board[i].fill(' ');
}

TicTacToe::~TicTacToe()
{
}

bool TicTacToe::setPunto(char player,int x , int y ){

    if((x<0||x>2)||(y<0||y>2)){
        std::cout<<"\n Posizione non valida"<<std::endl;
        return false;
    }
    if(board[x][y]==' '){
        board[x][y]=player;
        return true;
    } 
    else{
        std::cout<<"\n Posizione occupata "<<std::endl;
        return false;        
    }
        
}

TicTacToe::Status TicTacToe::getStatus(char choice){
    
    for(int i{0};i< 3; i++){
        if(board[i][0]==choice&& board[i][1]==choice && board[i][2]==choice) return WIN;
        if(board[0][i]==choice&& board[1][i]==choice && board[2][i]==choice) return WIN;    
        
    }

        if(board[0][0]==choice&& board[1][1]==choice && board[2][2]==choice) return WIN;
        if(board[2][0]==choice&& board[1][1]==choice && board[2][0]==choice) return WIN;

    for(int i{0};i<3;i++) for(int j{0};j<3;j++) if(board[i][j]==' ') return CONTINUE;

    return DRAW;

}

void TicTacToe::getBoard()const{
    std::cout<< "  0 "<<"  1 "<< " 2"<<"\n";
    //std::cout<< "  ___|___|___"<<"\n";

    for(int i{0};i<3;i++){
        std::cout<< i<< " ";
        for(int j{0};j<3;j++) std::cout<< " "<<board[i][j]<<" ";
        std::cout<<std::endl;
    }




}

void TicTacToe::startGame(){

    std::cout<< "\n Inizio gioco "<<std::endl;


    while(true){

        if(setMove('X')) break;
        if(setMove('O')) break;
    }

}

bool TicTacToe::setMove(char player){
    int x ,y;
    getBoard();
    do{
    std::cout<<"\n IL turno di "<< player << " inserisci la coordinata : ";
    std::cin>>x>>y;

    }while(!setPunto(player, x, y));

    if(getStatus(player)==CONTINUE) return false;
    else {
        if(getStatus(player)==WIN){
            std::cout<<"\n Congragatulazione il player "<< player << " ha vinto "<<std::endl;
            return true;

        }else{
            std::cout<<" \n Pareggio "<<std::endl;
            return true;
        }
    }
}











