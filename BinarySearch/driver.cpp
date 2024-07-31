#include <iostream>
#include <vector>
using namespace std;


int BinarySearch(vector<int>& A, int num){

    int left= 0;
    int right= A.size()-1;
    while (left<=right)
    {
        int mid= (left+right)/2;
        if(A[mid]==num)
            return mid;
         if(A[mid]<num)
            left=mid+1;  // cambio gli estremi 
        else
            right=mid-1;        

    }


    return -1;
    

}


int BinarySearchR( vector<int>& A, int left ,int right, int num ){


    while (left<=right)
    {

        int mid=(left+right)/2;
        if(A[mid]==num)
            return mid;
         if(A[mid]<num)
            return BinarySearchR(A,(mid+1),right,num);
        else
            return BinarySearchR(A,left,(right-1),num);
        
    }

    return -1;
    


}




int main(int argc, char const *argv[])
{
    vector<int> v{0,1,2,3,4,5,6,7,8,9,10};


    std::cout<<"\n posizione del numero interessato e' "<< BinarySearchR(v,0,v.size()-1,);




    return 0;
}
