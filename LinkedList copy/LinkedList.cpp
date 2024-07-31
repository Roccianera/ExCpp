#include "LinkedList.h"

template<typename NODETYPE>
LinkedList<NODETYPE>::LinkedList():
head{nullptr}{    }






template<typename NODETYPE>
LinkedList<NODETYPE>::LinkedList( const LinkedList<NODETYPE> & copy):
head{nullptr}{    


    for (int i =0; i<copy.size(); i++)
    {
        addFront(copy[i]);
    }

    reverse();

}




template<typename NODETYPE>
bool LinkedList<NODETYPE>::empty() const
{
    return head==nullptr;
    
}

template<typename NODETYPE>
LinkedList<NODETYPE>::~LinkedList()
{
    while(!empty()) removeFront();
}

template<typename NODETYPE>
const NODETYPE& LinkedList<NODETYPE>::front() const
{
    return head->elem;   
}

template<typename NODETYPE>
void LinkedList<NODETYPE>::addFront(const NODETYPE& e)
{
    Node<NODETYPE>* v = new Node<NODETYPE>;
    v->elem=e;
    v->next= head;
    head=v;
}

template<typename NODETYPE>
void LinkedList<NODETYPE>::removeFront()
{   if(head==nullptr)
        throw std::invalid_argument{"List is empty"};

    Node<NODETYPE>* old= head;  // salvo head
    head= old->next;                    // aggiorno head
    delete old;

    

}







template<typename NODETYPE>
int LinkedList<NODETYPE>::size() const
{     
      if(empty()) 
        return 0;
   
   int counter{1};
   Node<NODETYPE>* n = head;
   while(n->next != nullptr){
        n = n->next;
        ++counter;
    }
    
    return counter;
}



template<typename NODETYPE>
NODETYPE& LinkedList<NODETYPE>::operator[] (int posiz)const
{     
      if(posiz>=size())
        throw std::invalid_argument{"Fuori range"};
    
    Node<NODETYPE>* old=head;
    for(int i=0; i< posiz;i++){

            old=old->next;
    }        
    return old->elem;

    
}


template<typename NODETYPE>
std::string LinkedList<NODETYPE>::toString()const 
{   
    std::ostringstream output;
     // da aggiustare 
     // meglio usare un cursore 
     int s=size();
     
    output<<"[";
    for (int i = 0; i < s; i++)
    {   
        output<<(*this)[i];
        if(i==(s-1)) break;
        output<<",";

    }
   
    output<<"]"<<std::endl;

    return output.str();
    
}


template<typename NODETYPE>
LinkedList<NODETYPE>& LinkedList<NODETYPE>::operator=( const LinkedList<NODETYPE>& copy)
{   
    if(this==&copy)
        return *this;

    while(!empty()) removeFront();
    /*
    Node<NODETYPE>* cursor{copy.head};
    while (cursor!=nullptr)
    {
        this->addFront(cursor->elem);
        cursor=cursor->next;
    }
    reverse();*/
    /*
        for (int i =0; i<copy.size(); i++)
    {
        addFront(copy[i]);
    }

    reverse();*/

    int dim=copy.size();
    for (int i = dim-1; i >=0; i--)
    {
        addFront(copy[i]);
    }
    




    return*this;
}

template<typename NODETYPE>
LinkedList<NODETYPE>& LinkedList<NODETYPE>::reverse()
{

    Node<NODETYPE>* p=nullptr;              // previus 
    Node<NODETYPE>* c=head;             // current 
    Node<NODETYPE>* n=nullptr;              // next


    while (c!=nullptr)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        
    }

    head=p;

    p=nullptr;
    
    return *this;
}

template<typename NODETYPE>
LinkedList<NODETYPE>& LinkedList<NODETYPE>::Reverse()
{
    Node<NODETYPE>* prev{nullptr};
    Node<NODETYPE>* cur{head};
    Node<NODETYPE>* next{nullptr};
    
    while ( cur!= nullptr)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;

    }

    head=prev;
    prev=nullptr;
    

    return *this;
    


}



template<typename NODETYPE>
void LinkedList<NODETYPE>::remove(int posiz)
{   
    if(posiz>=size()||posiz<0)
       throw std::runtime_error{"Fuori range"};
    //idea scambio di posto la testa con l elemento che voglio elminare e faccio remove
    if(posiz==0){
        removeFront();
        return;
    }


    Node<NODETYPE>* old=head;
    
    for(int i=0; i< posiz-1;i++){

            old=old->next;      // mi posiziono nel elemento precedente a quello che devo elminare
    }    

    Node<NODETYPE>* temp=old;   // creo una variabile tempo;
    old=old->next;              //mi sposto un altra volta;


    temp->next=old->next;
    
    delete old;


    
}


template<typename NODETYPE>
int LinkedList<NODETYPE>::find(NODETYPE elm)const
{   
    for (int i = 0; i < size(); i++)
    {
        if((*this)[i]==elm)    
            return i;
    }
    
    return -1;
}