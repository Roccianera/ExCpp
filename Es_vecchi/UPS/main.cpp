#include "Package.h"
#include "Date\Date.h"
#include <list>
using namespace std;

void insertOrder( Package& p, std::list<Package*>& l);
void print(std::list<Package*>& l);
double weekly_earnings(std::list<Package*>&l);
void  ins(std::list<Package*>&l);

int main(int argc, char const *argv[])
{
    list<Package*> l;

    Package p{"Tom","JERRY",12,11,2022,121};
    Package p2{"Will","GOOD",6,5,2012,63};
    Package_Ex p3{"Gatsu","Griffith",21,4,1989,14,"usa","Giappone"};
    Package_Ex p4{"fak","kaf",3,7,2012,65,"sd","EU"};

    

    insertOrder(p,l);
    insertOrder(p2,l);
    insertOrder(p3,l);    
    insertOrder(p4,l);  

    ins(l);
    print(l);  

    std::cout <<"\n Week earnings:" << weekly_earnings(l);



    return 0;

}

void print(std::list<Package*>& l){

    for (auto p =l.begin(); p != l.end(); p++)
    {
        (*p)->print();
        std::cout<<"\n ";
    }
    
}



void insertOrder( Package& p, std::list<Package*>& l){
    std::list<Package*>::iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        if (**it < p) {
            break;
        }
    }

    Package* pp =&p;
    l.insert(it,pp);

}

double weekly_earnings(std::list<Package*>&l){

    double sum{0};

    std::list<Package*>::iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        

        sum+=(*it)->getPrice();    
    }

    return sum;

}


void ins(std::list<Package*>&l){

    Package p{"ew","fgf ",02,12,2000,223};

    insertOrder(p,l);


}