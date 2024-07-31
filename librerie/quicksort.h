#include <vector>
using std::vector;



template<template T>
int partition(vector<T>&A, int p , int q);


template<typename T>
void quickSort(vector<T*>& A, int p, int r){
    if (p<r)
    {
        int q=partition(A,p,r);
        quickSort(A,p,q);
        quickSort(A,q+1,r);
    }
}