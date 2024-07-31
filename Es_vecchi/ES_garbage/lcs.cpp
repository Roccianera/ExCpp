#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

int max(int , int );
int lcsLength(string& , string& , vector<vector<int>>& , int , int );


int main (){
    string s1 = "stone";
    string s2 = "one";
    vector<vector<int> > m(s2.size(),vector<int>(s1.size()));

    std::cout<<"Length of the Longest common sequence of s1 and s2 is: " << lcsLength(s1,s2,m,0,0);

    return 0;
}

int lcsLength(string& x, string& y, vector<vector<int>>& v, int i, int j){
    if (x[i] == 0 || y[j] == 0)
        return 0;
    else if(x[i]==y[j])
        return v[i][j] = 1 + lcsLength(x, y,v,i+1, j+1);
    else return v[i][j] = max(lcsLength(x,y,v,i+1,j), lcsLength(x,y,v,i,j+1));
}



int max(int a, int b){
    if(a>b){
        return a;
    }
    else if (a<b){
        return b;
    }
}