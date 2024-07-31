#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;



void randomMat(vector<vector<int>>& v,int righe, int colonne ){

    for(int i{0}; i<righe; i++) for(int j{0};j<colonne;j++) v[i][j]=rand()%10;
    
    
    for(int i{0};i<righe;i++){
        for(int j{0};j<colonne;j++)  cout<<v[i][j]<< " ";
        cout<<endl;
    }
}

main(){

    vector<vector<int>> matrice(10,vector<int>(10));
    for(int i{0};i<3;i++){
        for(int j{0};j<3;j++)  cout<<matrice[i][j]<< " ";
        cout<<endl;
    }
    cout<<"\n inzio programma"<<endl;
    randomMat(matrice, 3, 3);

 








}
