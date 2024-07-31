#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cst
using namespace std;



void prodottoMAt(array<array,10>,10>& v1, array<array, 10>,10>& v2,int m, int n, int q){

        array<array,10>,10> prodotto{};
        for(int i{0};i<m;i++){

                for(int j{0};j<q;j++){
                    int somma=0;
                    for(int k{0};k<n;j++){

                        somma+= v1[i][k]*v2[k][j];
                    }
                    prodotto[i][j]=somma;
                }
        }

}

void randomMat(vector<vector<int>>& v){





}





main(){




}

