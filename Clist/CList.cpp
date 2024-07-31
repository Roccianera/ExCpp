#include "CList.h"

template<typename T>
CList<T>::CList()
{
    cursor=nullptr;
    
}

template<typename T>
CList<T>::~CList()
{
    while(!empty()) remove();
}

template<typename T>
bool CList<T>::empty() const
{
    return cursor==nullptr;
}

template<typename T>
CList<T>& CList<T>::move()
{
    cursor=cursor->next;
    return *this;
}

template<typename T>
const T& CList<T>::back() const
{
    return  cursor->elem;
}

template<typename T>
const T& CList<T>::front() const
{
    return cursor->next->elem;
}

template<typename T>
std::string CList<T>::toString() const
{
    if(empty())  throw std::invalid_argument{" vuota"};
    std::ostringstream out;
    Cnode<T>* n=cursor;
    out<<"Cursor--> "<<n->elem;
    n=n->next;   

    while (n!=cursor)
    {
        out<<" <--> "<<n->elem;
        n=n->next;
    }
    
    out<<" <--> End";


    return out.str();
}

template<typename T>
CList<T>& CList<T>::operator=(const CList<T>& copy)
{
    if( this==&copy) return *this;

    while (!empty()) remove();

    Cnode<T>* cur{copy.cursor->next};
    do
    {    
        add(cur->elem);
        cur=cur->next; 

    } while (cur!=copy.cursor);
    add(cur->elem);


    return *this;
}

template<typename T>
CList<T>& CList<T>::reverse()
{/*
    Cnode<T>* prev{cursor};
    Cnode<T>* curr{cursor};
    Cnode<T>* next{nullptr};

  do{

        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    } while (curr!=cursor);


    cursor->next=prev;
    cursor=prev;*/



    /*
    Cnode<T> *value = cursor;

    move();

    Cnode<T>* prev{cursor};

    Cnode<T>* next{nullptr};

    Cnode<T>* current{cursor->next};

    while(current != cursor){

        next = current->next;

        current->next = prev;

        prev = current;

        current = next;

    }

    cursor->next = value;
    
*/

    Cnode<T>* cur{cursor};
    Cnode<T>* value{cursor->next};
    cur->next=nullptr;
    cur=value;


    Cnode<T>* prev{nullptr};

    Cnode<T>* next{nullptr};

    while(cur != nullptr){

        next = cur->next;

        cur->next = prev;

        prev = cur;

        cur = next;

    }

    value->next=cursor;
    cursor=value;

}





template<typename T>
CList<T>& CList<T>::add(const T& e)
{
    Cnode<T>* n=new Cnode<T>; n->elem=e;
    
    if(cursor==nullptr){
        n->next=n;
        cursor=n;

    }else{

        n->next=cursor->next;

        cursor->next=n;
    }
    
    return *this;
    
}



template<typename T>
void CList<T>::remove()
{
    if(empty())
        throw std::runtime_error{"List empty "};

    Cnode<T>* n=cursor->next;

    if(n->next==cursor)
        cursor=nullptr;
    else
        cursor->next=n->next;    

    delete n;
}
