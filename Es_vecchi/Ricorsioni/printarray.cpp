#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printArray(vector<int>& v , int l, int r){

    if(l<=r){

        for(int i{l};i<=r;i++)     cout<< v[i];
        cout <<endl;
        printArray(v, l+1,r-1);
        printArray

    }

}


int main(int argc, char const *argv[])
{
    vector<int> vettore(9,4);

    printArray( vettore, 0 , vettore.size()-1);

    return 0;
}
