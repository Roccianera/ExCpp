#include "Dice.h"
#include <iostream>

Dice::Dice()
{   
    srand(time(NULL));
    nLaunch=0;
    setDice();
}

Dice& Dice::setDice()
{
    result=rand()%6+1;
    nLaunch++;
    return *this;
}

int Dice::getDice() const
{
    return result;
}

bool Dice::guessNumber() const
{   
    int number;
    bool check ;
    do{
        check=true;
      try{
        
            std::cin>>number;
            if(number<1||number>6)
                throw std::invalid_argument{"\n Scelta non valida , Ritenta:"};
      }
     catch(std::invalid_argument& e){
            std::cout<<e.what();
            check=false;
     }
    }while(check);

    if(result==number){
        std::cout<<"\n WIN ";
        return true;
    }

    std:: cout<<"\n LOSE ";
    return false;
    
}

void Dice::getNDice(int n)
{   
    std::cout<< "\n Lancio dadi : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << setDice().getDice()<<" ";
    }
    std::cout<<std::endl;
    
}

std::ostream& operator<<(std::ostream& out, const Dice& d)
{
    
    out<<"\n Valore del dado lanciato : "<< d.result << std::endl;

    return out; 

}



