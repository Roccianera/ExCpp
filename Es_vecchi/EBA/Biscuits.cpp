#include "Biscuits.h"


void Biscuits::print()const{

    std::cout<<"\n"<<ID <<" "<<name<<" " << prod<<" ";
        for (int i = 0; i < PROP_LENGHT; i++)
        {
            std::cout<<propietes[i]<<" ";
        }
        
}

float Biscuits::EpsilonDistance(const Biscuits & rhs){
    float sum{0};

    for (int i = 0; i < PROP_LENGHT; i++)
    {
        sum+=(this->propietes[i]-rhs.propietes[i])*(this->propietes[i]-rhs.propietes[i]);
    }
    
    sum=sqrt(sum);
    return sum;
}
