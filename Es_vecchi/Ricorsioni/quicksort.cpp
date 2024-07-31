#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

void displayVector(vector<int>& );
void swap(int , int );
int partition(vector<int>& , int , int );
void quickSort(vector<int>& ,int , int );


int main()
{

    vector <int> s;

    int value;
    cout << "Enter the elements: " << endl;
    for (int i=0; i<=s.size()-1; i++){
        cin >> value;
        s.push_back(value); 
    }

    cout << "Vector is: " << endl;
    displayVector(s);

    cout << "---------" << endl;
    quickSort(s, 0, s.size()+1);


    cout << "Ordinated vector is: " << endl;

    displayVector(s);

    return 0;
}


void displayVector(vector<int>& v){
    for (int i=0; i<= v.size()-1; i++)
        cout << "v[" << i << "] = " << v[i] << endl;
}


void swap(int a, int b){ // error = a function definition is not allowed here before '{' token
    int temp = a;
    a = b;
    b = temp;
}




int partition(vector <int>& v, int l, int r){

    int p{l}; //pivot
    int i = l-1;
    int j = r+1;

    while (i<j){
        do{
            j-=1;
        }while(v[j] < p);

        do{
            i+=1;
        }while (v[i]> p);

        swap(v[j],v[i]);
    }

    return i;
}


void quickSort(vector <int>& v, int l, int r) {
 // i commenti vanno aggiornati


    if (l<r){
        quickSort(v, l, partition(v,l,r));
        quickSort(v, partition(v,l,r)+1, r);
    }
}