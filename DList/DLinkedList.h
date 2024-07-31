//
// DoubleLinkedList
// DLinkedList.h
// Created by Luigi Catello on 14/05/21.
// 
//

#ifndef DOUBLELINKEDLIST__DLINKEDLIST_H_
#define DOUBLELINKEDLIST__DLINKEDLIST_H_

#include <string>
#include <sstream>
#include "DNode.h"

template<typename T>
class DLinkedList {
 private:
  DNode<T>* header;                     // sentinelle
  DNode<T>* trailer;
 protected:                             // funzioni utili
  void add(DNode<T>* v, const T& e);    // inserisci l'elemento 'e' prima di 'v'
  void remove(DNode<T>* v);             // rimuovi il nodo 'v'
 public:
  DLinkedList();                        // costruttore
  ~DLinkedList();                       // distruttore
  bool isEmpty() const;                 // true se la lista è vuota
  const T& front() const;               // front element
  const T& back() const;                // back element
  void addFront(const T& elem);         // aggiungi elemento al front
  void addBack(const T& elem);          // aggiungi elemento al back
  void removeFront();                   // rimuove elemento dal front
  void removeBack();                    // rimuove elemento dal back
  std::string toString();               // converte in stringa
  void addInOrder(const T& elem);       // aggiungi un elemento in ordine
  void reverseList();                   // inverte l'ordine degli elementi nella lista
  int size()const;
  void sort();
};

template<typename T>
DLinkedList<T>::DLinkedList() {
    header = new DNode<T>;
    trailer = new DNode<T>;
    header->next = trailer;
    header->prev = nullptr;
    trailer->next = nullptr;
    trailer->prev = header;
}

template<typename T>
DLinkedList<T>::~DLinkedList() {
    while (!isEmpty()) {
        removeFront();
    }
    delete header;
    delete trailer;
}

template<typename T>
bool DLinkedList<T>::isEmpty() const {
    return (header->next == trailer);
}

template<typename T>
const T & DLinkedList<T>::front() const {
    return header->next->element;
}

template<typename T>
const T & DLinkedList<T>::back() const {
    return trailer->prev->element;
}

template<typename T>
void DLinkedList<T>::addFront(const T &elem) {
    add(header->next, elem);
}

template<typename T>
void DLinkedList<T>::addBack(const T &elem) {
    add(trailer, elem);
}

template<typename T>
void DLinkedList<T>::add(DNode<T> *v, const T &e) {
    // creo un nuovo nodo
    auto *u = new DNode<T>;
    u->element = e;

    u->next = v;
    u->prev = v->prev;
    v->prev->next = u;
    v->prev = u;
}

template<typename T>
void DLinkedList<T>::removeFront() {
    remove(header->next);
}

template<typename T>
void DLinkedList<T>::removeBack() {
    remove(trailer->prev);
}

template<typename T>
void DLinkedList<T>::remove(DNode<T> *v) {
    if (isEmpty()) {
        throw std::runtime_error("List is empty!");
    }
    DNode<T>* u = v->prev;
    DNode<T>* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}

template<typename T>
std::string DLinkedList<T>::toString() {
    std::ostringstream out;
    DNode<T> *u = header->next;
    out << "Header <--> ";
    while (u != trailer) {
        out << u->element << " <--> ";
        u = u->next;
    }
    out << "Trailer";
    return out.str();
}

template<typename T>
void DLinkedList<T>::addInOrder(const T &elem) {
    DNode<T> *u = header->next;
    while (u != trailer) {
        if (elem < u->element) {
            break;  // esci dal ciclo! Abbiamo trovato il posto giusto
        }
        u = u->next;
    }
    add(u, elem);
}

template<typename T>
void DLinkedList<T>::reverseList() {
    DLinkedList<T> temp;
    while (!this->isEmpty()) {
        temp.addFront(this->front());
        this->removeFront();
    }
    while (!temp.isEmpty()) {
        this->addBack(temp.front());
        temp.removeFront();
    }
}



template<typename T>
int DLinkedList<T>::size() const
{   
    int size{0};
    DNode<T>*it=header;

    while (it->next!=trailer)
    {   
        it=it->next;
        ++size;
    }
    
    return size;
    
}template<typename T>
int DLinkedList<T>::size() const
{   
    int size{0};
    DNode<T>*it=header;

    while (it->next!=trailer)
    {   
        it=it->next;
        ++size;
    }
    
    return size;
    
}




template<typename T>
void DLinkedList<T>::sort() {   
    bool swapped{true};
    Dnode<T> *cur; 
    if(empty()) return;
    while(swapped){
        swapped= false;
        // scorri la lista
        cur=header->next;
        while(cur->next!=trailer){
            if(cur->elem > cur->next->elem){
                std::swap(cur->elemmcur->next->elem);
                swapped=true;
            }
            cur=cur->next;
        }

        //confronta ongi elemento  con il successivo 
    }

}




#endif //DOUBLELINKEDLIST__DLINKEDLIST_H_