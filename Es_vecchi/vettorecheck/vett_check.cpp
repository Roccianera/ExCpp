#include <iostream>
#include <vector>
using std::cin; using std::cout ; using std::vector; using std::endl;

void InsNum(vector<int>&, int , int );

main(){

    vector <int> vettore;
    int numero;
    bool trovato{false};
    cout << " \n here  "<< vettore.size();


    cout<< "\n Inizio programma "<< endl;

    while (cin>>numero) // n volte 
    {   trovato=false;

        for(int i{0};i<vettore.size();i++){     //n*(n-1)/2   
            if(numero==vettore[i]){
                trovato=true;
                break;
            }
        }

        if(!trovato){
            InsNum(vettore, numero,vettore.size()); // 
        }
    }
        // il costo computazionale del progrmma dovrebbe essere O(n^2)
        for( auto i : vettore) cout << i << " ";
        cout<< "\n il numero di elementi salvati " << vettore.size();
}

void InsNum(vector<int>& vet, int value , int size ){

    if(size==0)
        vet.push_back(value);
    else{

        for(int i{size-1};i>=0;i--){
            if(value>vet[i]){
                vet.insert(vet.begin()+i+1,value);  // n volte 
                break;
            } else{
                if(value<vet[0]) vet.insert(vet.begin(),value);
                
            }
        }
    }
        
}
