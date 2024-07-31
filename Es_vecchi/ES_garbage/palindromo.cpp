#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int pal;

    int c1,c2,c4,c5;

    cout<<"\n Inserisci il palindromo "<<endl;
    cin>>pal;

    c1=pal/10000;
    pal=pal%10000;
    cout<<c1<<endl;

    c2=pal/1000;
    pal%=1000;
    cout<<c2<<endl;


    pal%=100;

    c4=pal/10;
    
    cout<<c4<<endl;


    c5=pal%10;
    cout<<c5<<endl;


    if (c1==c5&& c2==c4)
        cout<<"\n Il tuo è palindromo" ;
    else
        cout<<"\n non è pal";

    return 0;
}
