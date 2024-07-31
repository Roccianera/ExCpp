#ifndef TNODE_H
#define TNODE_H

template<typename TYPE> class BTS;
template< typename TYPE>

class Tnode
{
public:
    Tnode(Type k, Tnode<TYPE>* p=nullptr,Tnode<TYPE>* l=nullptr,Tnode<TYPE>* r=nullptr):
        key{k},parent{p},right{r},left{l}{}

private:
    friend  class BTS<TYPE>;
   TYPE key;
   Tnode<TYPE>* parent;
   Tnode<TYPE>* right; 
   Tnode<TYPE>* left; 
};

#endif