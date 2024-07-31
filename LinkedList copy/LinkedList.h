#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>

template <typename NODETYPE>
class LinkedList
{
public:
    LinkedList();
    LinkedList( const LinkedList<NODETYPE> & copy);
    ~LinkedList();
    bool empty()const;
    const NODETYPE& front()const;  //fatto
    void addFront(const NODETYPE& e); // fatto
    void removeFront();  // fattp
    int size()const;
    NODETYPE& operator[](int i)const;
    LinkedList<NODETYPE>& operator=( const LinkedList<NODETYPE>& copy);

    LinkedList<NODETYPE>& reverse();
    LinkedList<NODETYPE>& Reverse();

    std::string toString()const;
    void remove(int i );
    int find(NODETYPE)const;




private:
    Node<NODETYPE>* head;

};

#include "LinkedList.cpp"


#endif