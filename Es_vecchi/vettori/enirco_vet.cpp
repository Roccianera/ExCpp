#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void insV(vector<int>& v, int l, int r, int n){
    int k{0};
    for(int i{l};i<r;i++){
        if(i!=l){
            int k1=v[i+1];
            v[i+1]=k;
            k=k1;
        }else{
            k=v[i+1];
            v[i+1]=v[i];
        }
    }
    v[l]=n;
}
bool confronto (vector<int>& v,int r,int n){
    for(int i{0}; i<r; i++){
        if(n!=v[i]){
            if(n<v[i]){
                insV(v,i,r,n);
                return true;
            }
        }else{
            return false;
        }
    }
    v[r]=n;
    return true;
}
int main(){
    vector<int> A(10);
    for(int i{0};i<A.size();i++){
        int n{rand()%73}; 
        cout << n << " ";
        if(i==0){
            A[i]=n;
        }else{
            if(!confronto(A,i,n)){
                i--;
            }
        }
    }
    cout << endl;
    for (int a : A){
        cout << a << " ";
    }
}