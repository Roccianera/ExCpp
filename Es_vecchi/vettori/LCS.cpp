#include <iostream>
#include <string>
#include <array>
using namespace std;


int max(int x, int y ){

   return (x>y)?x:y;
}

void  LCS(string&, string&,int, int );

 main(){
     
     string stringa1{"CTCCTAG"};
     string stringa2{"ATACCAGA"};
     
     LCS(stringa1,stringa2,stringa1.length(),stringa2.length());

    
 }


 void LCS(string& s1, string& s2, int n, int m ){

        array<array<int,20>,20> v{};
       
        
        for(int i=1; i < m+1 ;i++){

            for(int j=1;j<n+1 ;j++){

                    if( s2[i-1]==s1[j-1]) 

                        v[i][j]= 1+ v[i-1][j-1];
                    
                    else
                        v[i][j]=max(v[i][j-1], v[i-1][j]);
            }
        }

        
        /*
        for (int i{0};i<m+1;i++) {
                for(int j{0};j<n+1;j++){
                    cout << v[i][j] << " ";
                } 
                cout<< endl;

        }
        */
       cout<<"\n La lunghezza della lcs è di : "<< v[m][n]; 

 }