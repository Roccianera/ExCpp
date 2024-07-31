#ifndef __CODA_H__
#define __CODA_H__

#include <iostream>
#include <vector>

class Coda
{
private:
    int* array;
    int n;
    int head,tail;
    int MAX_SIZE;
public:
    Coda(int dim):array{new int[dim]},n{0},head{0},tail{0},MAX_SIZE{dim}{}
    ~Coda(){ delete[] array;}
    int size()const{ return n;}
    int front()const{ return array[head];}
    bool empty()const { return n==0;}
    void enqueue(const int & e);
    void dequeue();

protected:
    int ModN(int x);

};

void Coda::enqueue(const int & e){
    
    if(size()==(MAX_SIZE-1)) 
        throw std::runtime_error{ "Coda Piena"};
    
    array[tail]=e;
    tail=ModN(tail);
    n++;
}


void Coda::dequeue(){
    if(empty()) 
        throw std::runtime_error{" Coda vuota"};
    head=ModN(head);
    n--;
}



int Coda::ModN(int x){

if( (x+1)==MAX_SIZE) return 0 ;
    return x+1;

}








#endif // __CODA_H__