#ifndef BST_H
#define BST_H

#include "Tnode.h"
#include <iostream>

template <typename TYPE>
class BST
{
    
public:
    BST(): root{nullptr}   {}

   Tnode<TYPE>* INSERT(TYPE key);
   Tnode<TYPE>* DELETE(Tnode<TYPE>* x);
   Tnode<TYPE>* Search(TYPE key);
   void  Preorder(Tnode<TYPE>* x)const;
   void  Inorder(Tnode<TYPE>* x)const;
   void  Postorder(Tnode<TYPE>* x)const;
   Tnode<TYPE>* minimum(Tnode<TYPE>* x);
   Tnode<TYPE>* maximum(Tnode<TYPE>* x);
   Tnode<TYPE>* Succesor(Tnode<TYPE>* x);
   Tnode<TYPE>* Predecessor(Tnode<TYPE>* x);


private:
    Tnode<TYPE>* root; // punta alla radice 

};




#include"BST.cpp"

#endif