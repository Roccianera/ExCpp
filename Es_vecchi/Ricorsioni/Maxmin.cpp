#include <iostream>

using std::cout;
using std::cin;

int max(int vet[], int lenght);
int min(int vet[], int lenght);
void maxRec(int vet[],int left,int right, int& m);




int main()
{
    cout<<"\nInserisci la sequenza di numeri di cui vuoi conoscere massimo e minimo.\n";
    int num[100];
    int n{0},cont{0},l{0};

    cin>>n;

    while(n!=0)
    {
        num[cont]=n;
        cin>>n;
        cont++;

    }
    for(int i{0};i<cont;i++)  cout << num[i] <<" ";
    int max{num[0]};


    //max(num,cont);
    //min(num,cont);

    maxRec(num,l,cont-1,max);
    cout<<"\nIl massimo è: "<<max;

}

int max(int vet[], int lenght)
    {

         int max,i{0};
         max=vet[i];

        for(i=1; i<lenght; i++)
        {

            if(vet[i]>max)
            {
                max=vet[i];
            }
        }

        cout<<"\nIl massimo è: "<<max;
    }

int min(int vet[], int lenght)
    {
        int min,i{0};
         min=vet[i];

        for(i=1; i<lenght; i++)
        {

            if(vet[i]<min)
            {
                min=vet[i];
            }
        }

        cout<<"\nIl minimo è: "<<min;
    }

void maxRec(int vet[],int left,int right,int& m)
    {
       
        if(left<right)
        {
            if(vet[left+1]>m)
                m=vet[left+1];

            maxRec(vet,left+1,right,m);
        }
        
    }
