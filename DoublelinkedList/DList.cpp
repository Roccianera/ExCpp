#include "DList.h"
#include <algorithm>

template<typename T>
DList<T>::DList()
{
    head=new Dnode<T>; // se non faccio cosi non posso avere next
    trailer=new Dnode<T>;

    head->previous=nullptr;
    trailer->next=nullptr;
    head->next=trailer;
    trailer->previous=head;
    

}

template<typename T>
bool DList<T>::empty() const
{
    return head->next==trailer;
}

template<typename T>
const T& DList<T>::front() const
{
    if (empty())
        throw std::runtime_error{"Lista vuota"};
    
    return head->next->elem;
    
}

template<typename T>
const T& DList<T>::back() const
{
      if (empty())
        throw std::runtime_error{"Lista vuota"};
    
    return trailer->previous->elem;
}

template<typename T>
DList<T>& DList<T>::addFront(const T& e)
{
    add(head->next,e);
    return *this;
}

template<typename T>
DList<T>& DList<T>::addBack(const T& e)
{   
    add(trailer,e);
    
    return *this;
}

template<typename T>
void DList<T>::removeFront()
{
    if (empty())
         throw std::runtime_error{"Lista vuota"};

    remove(head->next);

}

template<typename T>
void DList<T>::removeBack()
{   
    if (empty())
        throw std::runtime_error{"Lista vuota"};
    
    remove(trailer->previous);
}

template<typename T>
std::string DList<T>::toString() const
{
    std::ostringstream out;
    Dnode<T>* u=head->next;
    out<< "Header <--> ";

    while (u!=trailer)
    {
        out<< u->elem<<" <--> ";
        u=u->next;
        
    }

    out<<"Trailer";
    return out.str();    

    
}



template<typename T>
int DList<T>::size() const
{   int size=0;
    Dnode<T>* cur=head->next;

    while (cur!=trailer)
    {
        cur=cur->next;
        size++;
    }
    

    return size;
}

template<typename T>
void DList<T>::sort()
{
    int lenght=size();
    for (int i = 0; i < lenght-1; i++)
    {
        for (int j = 0; j<lenght-1-i; j++)
        {
            if((*this)[j]>(*this)[j+1]){

                std::swap((*this)[j],(*this)[j+1]);
            }
        }
        
    }
    
}
template <typename T>
void DList<T>::bubbleSort()
    {
        if(empty()) return;

        Node<T>* cur;
        bool swapped{true};

        while(swapped)
            {
                swapped=false;
                cur=head->next;
                    while(cur->next!=trailer)
                        {
                            if(cur->elem > cur->next->elem)
                                {
                                    swap(cur->elem,cur->next->elem);
                                    swapped=true;
                                }
                            cur=cur->next;
                        }
            }
        
        return;
    }



template<typename T>
T& DList<T>::operator[](int posiz)
{
    if(posiz>=size())
        throw std::invalid_argument{"Fuori range"};
    
    Dnode<T>* old=head->next;
    for(int i=0; i< posiz;i++){

            old=old->next;
    }        
    return old->elem;


}

template<typename T>
DList<T>::~DList()
{
    while (!empty())    removeFront();
    delete head;
    delete trailer;
    
}

template<typename T>
void DList<T>::add(Dnode<T>* v, const T& e)
{   // v nodo succevviso a quello da aggiungere 
    Dnode<T>* u =new Dnode<T>; u->elem=e;

    u->next=v;
    u->previous=v->previous;
    v->previous->next=u;
    v->previous=u;
    
}

template<typename T>
void DList<T>::remove(Dnode<T>*v)
{
    if(empty())
        throw std::runtime_error{"Lista vuota"};

    Dnode<T>* u=v->previous;
    Dnode<T>* w=v->next;

    u->next=w;
    w->previous=u;

    delete v;
}
