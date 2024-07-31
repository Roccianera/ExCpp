#ifndef CLIST_H
#define CLIST_H
#include "Node.h"
#include <string>
#include <iostream>
#include <sstream>



template <typename T>
class CList
{
public:
    CList();
    ~CList();
    bool empty()const;
    CList<T>& move();
    const T& back()const;
    const T& front()const;
    std::string toString()const;
    std::string Tostring()const;

    CList<T>& operator=(const CList<T>& copy);
    CList<T>& reverse();


    CList<T>& add(const T&);
    void remove();

private:
    Cnode<T>* cursor;


};
#include "Clist.cpp"
#endif