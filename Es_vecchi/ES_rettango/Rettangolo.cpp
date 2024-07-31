#include <iostream>
#include "Rettangolo.h"
#include <stdexcept>
#include "point.h"
using std::array;
using std::invalid_argument;
using std::cout; using std::endl;

Rettangolo::Rettangolo( int x1, int x2, int y1 , int y2 ){
     for(int i{0};i<25;i++)   matrix[i].fill('.');
     setPunti(x1, x2, y1, y2);
    
}

Rettangolo::~Rettangolo(){}

void Rettangolo::stampaRettangolo(){

    for(int i{0};i<25;i++){

        for(int j{0};j<25;j++) std::cout<< matrix[i][j] <<" ";
        std::cout<<std::endl;
        
        
    }

}

void Rettangolo::setRettangolo(){
    for(int i{p1.getX()};i<p2.getX();i++) matrix[p1.getY()][i]='*';
    for(int i{p3.getX()};i<p4.getX();i++) matrix[p3.getY()][i]='*';
    for(int i{p1.getY()};i<p3.getY();i++) matrix[i][p1.getX()]='*';
    for(int i{p2.getY()};i<p4.getY();i++) matrix[i][p2.getX()]='*';
    
    for(int i{p1.getY()+1};i<p3.getY();i++){
        for(int j{p1.getX()+1};j<p2.getX();j++) matrix[i][j]='-';
    }
    


}

void Rettangolo::setPunti(int x1, int x2, int y1 , int y2 ){

    if(x2>x1&& y2>y1){
        p1.setPoint(x1,y1);
        p2.setPoint(x2,y1);
        p3.setPoint(x1,y2);
        p4.setPoint(x2,y2);
    }
    else{
        throw invalid_argument("Punti non compatibili ");
    }
    
}

void Rettangolo::getPropieta(){
    int height{p2.getX()-p1.getX()};
    int widht{p3.getY()-p1.getY()};
    
    cout<< "\n altezza : "<< height<<endl;
    cout<< "\n larghezza : "<< widht<<endl;
    cout<< "\n perimetro : "<< 2*(height+widht)<<endl;
    cout<< "\n area : "<< height*widht<<endl;
    

}