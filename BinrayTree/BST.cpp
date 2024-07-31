#include "BST.h"


template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::INSERT(TYPE key)
{
    Tnode<TYPE>* z=new Tnode<TYPE>(key);
    Tnode<TYPE>* Parent=nullptr;
    Tnode<TYPE>* cursor=root;


    while (cursor!=nullptr)
    {
        Parent=cursor;
        if(z->key <cursor->key)
            cursor=cursor->left;
        else
            cursor=cursor->right;
    }

    z->parent=Parent;

    if (Parent==nullptr)
    {
        root=z;
    }else{

        if (z->key<Parent->key)
            Parent->left=z;
        else
            Parent->right=z;        
        
    }
    return z;
}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::DELETE(Tnode<TYPE>* z)
{   
    Tnode<TYPE>* y=nullptr;
    Tnode<TYPE>* x=nullptr;

    if (z->left==nullptr || z->right==nullptr )
        y=z;
    else
        y=Succesor(z);

    if(y->left!=nullptr)
        x=y->left;
    else
        x=y->right;

    if(x!=nullptr)
        x->parent=y->parent;

    if(y->parent=nullptr){
        root=x;
    }else{

        if (y==y->parent->left)
            y->parent->left=x;
        else
            y->parent->right=x;

        
        
    }
    
    if (y!=z)
    {
        z->key=y->key;
    }
    
    return y;


}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::Search(TYPE key)
{
    Tnode<TYPE>* cursor=root;

    while (cursor!=nullptr)
    {
        if(key==cursor->key){
            return cursor;
        }else{

            if (key<cursor->key)
                cursor=cursor->left;
            else
                cursor=cursor->right;            
        }


    }


    std::cout<<"\n There is no elment with such key\n";

    return nullptr;

}

template<typename TYPE>
void BST<TYPE>::Preorder(Tnode<TYPE>* x) const
{
    if (x!=nullptr)
    {
        std::cout<<" "<<x->key<<" ";
        Preorder(x->left);
        Preorder(x->right);
    }
    
}

template<typename TYPE>
void BST<TYPE>::Inorder(Tnode<TYPE>* x) const
{
    if (x!=nullptr)
    {
        Inorder(x->left);
        std::cout<<" "<<x->key<<" ";
        Inorder(x->right);
    }
}

template<typename TYPE>
void BST<TYPE>::Postorder(Tnode<TYPE>* x) const
{
    if (x!=nullptr)
    {
        Postorder(x->left);
        Postorder(x->right);
        std::cout<<" "<<x->key<<" ";

    }
}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::minimum(Tnode<TYPE>* x)
{
    Tnode<TYPE>* cursor=x;
    while (cursor->left!=nullptr)
    {
        cursor=cursor->left;
    }
    
    return cursor;
}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::maximum(Tnode<TYPE>* x)
{
    Tnode<TYPE>* cursor=x;

    while (cursor->right!=nullptr)
    {
        cursor=cursor->right;
    }
    
    return cursor; 
}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::Succesor(Tnode<TYPE>* x)
{
   Tnode<TYPE>* subroot=x;

    if (subroot->right!=nullptr) return minimum(subroot->right);

   Tnode<TYPE>* y=subroot->parent;

   while (y!=nullptr && subroot==y->right)
   {
       subroot=y;
       y=y->parent;

   }

   return y;

    
}

template<typename TYPE>
Tnode<TYPE>* BST<TYPE>::Predecessor(Tnode<TYPE>* x)
{
    
    Tnode<TYPE>* subroot=x;

    if (subroot->right!=nullptr) return maximum(subroot->left);

   Tnode<TYPE>* y=subroot->parent;

   while (y!=nullptr && subroot==y->left)
   {
       subroot=y;
       y=y->parent;

   }

   return y;

}

