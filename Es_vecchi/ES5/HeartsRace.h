 #include<iostream>
 #include<string>
 #include "C:\Users\hamza\OneDrive\Desktop\date.h"


class HeartsRace{
private:
std::string name;
std::string surname;
Date birth{1,1,1};
public:
HeartsRace(int d, int m, int y,std::string n, std::string s)
    :birth{d,m,y},name{n},surname{s}{



    }
void setName(std::string n){
    name=n;
}
std::string getName() const{

    return name;
}

void setSurname(std::string s){
    surname=s;
}
std::string getSurname()const{

    return surname;
}

void setBirth(int d, int m , int y){

    birth.setDay(d);
    birth.setMonth(m);
    birth.setYear(y);

}
void getBirth(){

    birth.displayDate();
}
int getAge() {
 return (2022-birth.getYear());
}

int getHeartMax(){
    return (220-(2022-birth.getYear()));
}
void getHeartRange(){
    int ratemin;
    int ratemax;
    int rate{getHeartMax()};
    ratemin=rate/2;
    ratemax=(85*rate)/100;
    std::cout<<"\n Il tuo range e' di "<<ratemin<<"-"<<ratemax<<std::endl;
}
};

