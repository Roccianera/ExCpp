
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int i;
    cout<<"\nEnter the four-digits integer to encrypt: ";
    cin>>i;
   

    unsigned int vett[4];

    for(int n=3;n>=0;n--)
    {
        vett[n]=i%10;
        cout<<"\nDebug vett[n]: "<<vett[n];
        i=i/10;
        cout<<"\nDebug i: "<<i;
        
        
    }
/*
     for(int p=0; p<4;p++)
    {
        cout<<"\nDebug-Stampo l'intero nel vettore";
        cout<<vett[p];
    }

    for(int j=0; j<4;j++)
    {
        vett[j]=(vett[j]+7)/10;
    }

    int a{0},b{0};
    a=vett[0];
    b=vett[1];
    vett[0]=vett[2];
    vett[2]=a;
    vett[1]=vett[3];

    cout<<"\nStampo il numero criptato.\n";

    for(int l=0;l<4;l++)
    {
        cout<<vett[l];
    }
*/
}