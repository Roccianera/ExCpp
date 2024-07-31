#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::cin;
using std::endl;

int stampvec(vector <int>&, int );
int riempvec(vector <int>&, int );
int binsearch(vector <int>&, int );

int main()
{
    vector <int> v;
    cout<<"\nInserisci la lunghezza del vettore :";
    int n{0};
    cin>>n;

    riempvec(v,n);
    stampvec(v,n);

int x=    binsearch(v,n);
    


}

int riempvec(vector <int>& vet, int len)
{
    int val{0};

     for(size_t i=0;i<len;i++)
    {
        cin>>val;
        vet.push_back(val);
    }
}

int stampvec(vector <int>& vec, int b)
{
    cout<<"\nStampo il vettore:"<<endl;
    for(size_t j=0;j<b;j++)
    {
        cout<<"v["<<j<<"]: "<<vec[j]<<endl;
    }
}

int binsearch(vector <int>& vec, int len )
{
    int left=0;
    int right=len-1;
    int num;
    cout<<"\nInserisci il valore da ricercare nel vettore: ";
    cin>>num;

    while(left<=right)
    {
        int mid=(right+left)/2;

        if(vec[mid]==num)
        {
            cout<<"\nIl valore è stato trovato in posizione v["<<mid<<"].";
           return 0;
        }
        
        if(vec[mid]<num)
        {
            left=mid+1;
        }else
            {
                right=mid-1;
            }
    }
    cout<<"\nIl numero non è stato trovato";
    return 0;
}     
