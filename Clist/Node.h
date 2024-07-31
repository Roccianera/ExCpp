


template <typename T> class CList;

template <typename T>

class Cnode
{
private:
    T elem;
    Cnode<T>* next;
    
public:
    friend class CList<T>;


};

