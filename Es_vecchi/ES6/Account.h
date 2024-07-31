#include<string>
#include<iostream>

class Account{
    private:
    std::string name;
    float balance;

    public:

    Account(std::string n, float b)
        : name{n},balance{b}{


        }

    void setName(std::string n){

        name=n;
    }
    std::string getName(){
        return name;
    }

    void setBalance(float f){

        balance=f;
    }

    float getBalance(){

        return balance;
    }






};