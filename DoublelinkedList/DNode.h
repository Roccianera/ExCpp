#ifndef __DNODE_H__
#define __DNODE_H__

template <typename T> class DList;

template <typename T>

class Dnode
{
private:
    T elem;
    Dnode<T>* next;
    Dnode<T>* previous;
    
public:
    friend class DList<T>;


};

#endif // __DNODE_H__