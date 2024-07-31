#include "Web.h"

Web::Web(int np):
    Npages{np}{
    Links=new std::list<int>[Npages];
    for (int i = 0; i < Npages; i++)
        pages.push_back(Page{i,0,static_cast<double>(1.0)/Npages});
}

Web::~Web()
{
    delete[] Links;

}


void Web::addLink(int lhs, int rhs){

    Links[lhs].push_back(rhs);
    pages[lhs].nLinks++;

}

void Web::RankUpdate(){
    //devo aggiornare i pesi  pero prima devo non modificarli 
    double * newP= new double[Npages];
    double sum{0};
    for (int i = 0; i < Npages; i++)
    {
        for (auto  iter= Links[i].begin(); iter!=Links[i].end(); i++)
        {
            newP[*iter]=0;
            newP[*iter]+= pages[i].Rank/pages[i].nLinks;
        }
        
    }


    for (int i = 0; i < Npages; i++)
    {
        pages[i].Rank= (1.0-delta)/Npages  +delta*newP[i];
    }
    
    delete[] newP;

}


void Web::printRanks()
{

    for (int i = 0; i < Npages; i++)
    {
        std::cout<< "Page "<< i <<"\t ranks: "<<pages[i].Rank << "\n ";
    }
    
}