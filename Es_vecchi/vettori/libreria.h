#include <iostream>
#include <string>
#include <vector>
using namespace std;


void MergeSort(vector<int>& A, int p , int r){

    int q;
    if(p<r){
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);

        Merge(A,p,r,q);

    }
}



void Merge(vector<int>& A, int p, int r, int q ){

    int i{p};
    int k{p};
    int j{q+1};
   static vector<int> c(A.size());

    while(i<=q && j<= r){
        if(A[i]<A[j])  
            c[k++]=A[i++];
        else
            c[k++]=A[j++];
    }

    while (i<=q)   c[k++]=A[i++];
    while (j<=r)   c[k++]=A[j++];

    for(int i{p};i<k;i++) A[i]=c[i];



}