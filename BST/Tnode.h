#ifndef __TNODE_H__
#define __TNODE_H__

#include <iostream>
#include <string.h>
template<typename Key> class BST;

template<typename Key> 
class Tnode
{
private:
    Tnode<Key>* parent;
    Tnode<Key>* left;
    Tnode<Key>* right;
    Key key;
public:
    Tnode(Key k ,Tnode<Key>* p=nullptr,Tnode<Key>* l=nullptr,Tnode<Key>* r=nullptr):
        key{k},parent{p},left{l},right{r}{}
    friend class BST<Key>;

};



#endif // __TNODE_H__