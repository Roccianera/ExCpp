#ifndef BST_H
#define BST_H

#include "Tnode.h"
template<typename Key> 
class BST
{
public:
    void inorderTreeWalk(Tnode<Key>* x);
    void inorderTreeWalk(){ inorderTreeWalk(root);}


    BST(Tnode<Key>*r= nullptr): root(r) {}
    Tnode<Key>* getRoot() { return root;}
    Tnode<Key>* minimum(Tnode<Key>* subroot);
    Tnode<Key>* maximum(Tnode<Key>* subroot);
    Tnode<Key>* predecessor();
    Tnode<Key>* successor(Tnode<Key>* subroot);
    Tnode<Key>* search(Key key);



    Tnode<Key>* insert(Key key);
    



    Tnode<Key>* root;

};

template<typename Key>
void BST<Key>::inorderTreeWalk(Tnode<Key>* x)
{
    if( x!=nullptr){
        inorderTreeWalk(x->left);
        std::cout<<"\n "<<x->key;
        inorderTreeWalk(x->right);
    }

    
}

template<typename Key>
Tnode<Key>* BST<Key>::minimum(Tnode<Key>* subroot)
{
    Tnode<Key>* cur=subroot;
        while (cur->left!=nullptr)
        {
            cur=cur->left;
        }

        return cur;
        

    
}

template<typename Key>
Tnode<Key>* BST<Key>::successor(Tnode<Key>* subroot)
{
    Tnode<Key>* cur=subroot;
    if(cur->right!= nullptr)
        return minimum(cur->right);
    
    Tnode<Key>* y=cur->parent;
    while (y!=nullptr&& cur==y->right)
    {
        cur=y;
        y=cur->parent;
    }
    return y;
    

    
}

template<typename Key>
Tnode<Key>* BST<Key>::search(Key key)
{
    Tnode<Key>* cursor{root};
    while (cursor!=nullptr)
    {
        if( key== cursor->key) break;
        if(key<cursor->key)
            cursor=cursor->left;
        else
            cursor=cursor->right;
    }


    return cursor;  // se non trova nulla restituisce null ptr;
}

template<typename Key>
Tnode<Key>* BST<Key>::insert(Key key)
{
    
    Tnode<Key>* z=new Tnode<Key>(key);
    Tnode<Key>* y{nullptr};
    Tnode<Key>* x{root};   // il mio cusore 
    while (x!=nullptr)
    {
        y=x;
        if(z->key<x->key)   x=x->left;
        else                x=x->right;
    }
    z->parent=y;
    if( y==nullptr)
        root=z;
    else{
        if (z->key<y->key)
            y->left=z;
        else
            y->right=z;

    }
    

}







#endif