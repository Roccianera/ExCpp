#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T> 
void Heapify(vector<T>&c,int i,int size){
    int left{2*i+1};
    int right{2*i+2};
    int largest;
    if(left<size && c[left]>c[i])
        largest=left;
    else    
        largest=i;

    if(left<size && c[right]>c[largest])
        largest=right;

    if ( largest!=i){
        swap(c[largest],c[i]);
        Heapify(c,largest,size);
    }        
}

template<typename T> 
void Build_Heap(vector<T>& C){
    int heap_size= C.size();

    
    for (int i = (heap_size/2); i >=0; i--)
        Heapify(C,i,heap_size);

        

}

template<typename T>
void Heapsort(vector<T>& C){
    Build_Heap(C);
    int lenght=C.size();  
    int heap_size=C.size();

    
    for (int i = lenght-1; i>=1 ; i--)
    {   swap(C[0],C[i]);
        heap_size--;
        Heapify(C,0,heap_size);
    }
    

}
/*

template<typename T>

void DLinkedList<T>::bubbleSort(){ // bubble sort



    if(isEmpty()) return;



    bool swapped{true};

    DNode<T>* cur;

    while(swapped){ //faccio un while fin quando non faccio piu swap

        swapped = false;

        //scorri la lista

        cur = header->next;

        while(cur->next != trailer){ // confronta ogni elemetno con il successivo fino alla fine

            if(cur->elem > cur->next->elem){

                std::swap(cur->elem, cur->next->elem);

                swapped = true;

            }

            cur = cur->next;

        }



    }



}*/
int main(int argc, char const *argv[])
{

    vector<int> c{65,64,233,54,23,65,21,22};
    Heapsort(c);


    for(int i=0; i< c.size();i++)
        std::cout<<" "<< c[i];
    
    return 0;
}
