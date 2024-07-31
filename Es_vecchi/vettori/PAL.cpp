#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool PalCheck(string& stringa , int start , int end ){

    if(start<end){

        if(stringa[start]!=stringa[end]) return false ;
        PalCheck(stringa, start+1, end-1);

    }
    else return true ;

}


main(){

        string stringa;
        
        cout << "\n Inizio programmza "<<endl;
        while (cin>>stringa)
        {

         if(PalCheck(stringa, 0, stringa.length()-1)) 
            cout<< "\nYES ";
         else
            cout << "\nNO";
         
         cout<< endl;
        }




}