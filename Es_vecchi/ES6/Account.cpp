#include<iostream>
#include<string>
#include "Account.h"
using std::cout;
using std::endl;

void DisplayAccount(Account account){
    cout<<"\n Il nome del account e' "<<account.getName()<<endl;
    cout<<"i mooney che tieni so "<<account.getBalance()<<endl;

}


main(){
    Account account1{"Hamza",-1};
    Account account2{"Enrico",10000};
    DisplayAccount(account1);
    DisplayAccount(account2);



}