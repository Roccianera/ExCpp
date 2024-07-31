#ifndef __CODA_H__
#define __CODA_H__

#include<iostream>
#include <array>
class Coda
{
private:
    std::array<int,5> coda;
    int* head;
    int* tail;
    int Size;
public:
    int size()const{return coda.size();}
    Coda();
    bool empty()const{ return Size==0;}
    int front()const;
    Coda& enqueue(const int & e);
    Coda& denqueue();

    
};
Coda::Coda():head{&coda[0]},tail{&coda[0]},Size{0}
{
    
}

int Coda::front()const{
    if(empty()) throw std::invalid_argument{"errore "};
    return *head;
}

Coda& Coda::enqueue(const int & e)
{
    if(Size=9) throw std::invalid_argument{"Coda piena "};
    Size++;

    
    return *this;
}

#endif // __CODA_H__