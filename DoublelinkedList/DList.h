#ifndef DLIST_H
#define DLIST_H
#include "DNode.h"
#include <string>
#include <string>
#include <sstream>

template <typename T>

class DList
{
public:
    DList();
    bool empty()const;
    const T& front()const;
    const T& back()const;
    DList&  addFront(const T& e);
    DList&  addBack(const T& e);
    void  removeFront();
    void removeBack();
    std::string toString()const;
    int size()const;
    void sort();
    T& operator[](int i);
    ~DList();
    void bubbleSort();

private:
    Dnode<T>* head;
    Dnode<T>* trailer;
protected:
    void add(Dnode<T>* v, const T& e);
    void remove(Dnode<T>*v);    

};



#include"DList.cpp"

#endif