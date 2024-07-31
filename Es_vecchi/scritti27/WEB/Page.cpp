#include "Page.h"
#include <cstdlib>
#include <time.h>

WEB::WEB(int npages){

    web=new std::list<int>[npages];

    for (int i = 0; i < npages; i++)
        pages.push_back(Page(static_cast<double>(1.0)/npages,i,0));
    
    
}

void WEB::rankUpdate()
{
    int npage=pages.size();
    double * newP= new double[npage];


    for (int i = 0; i < npage; i++)
    {
        for (auto j = web[i].begin(); j !=web[i].end(); j++)
        {
            newP[*j]=pages[i].rank/pages[i].numberOfLinks;


        }
        
    }



    
    for (int i = 0; i < npage; i++)
    {
        pages[i].rank=(1.0-delta)/npage +delta *newP[i];
    }
        
    delete [] newP;
    

    
}

void WEB::printRank()
{

   for (int i = 0; i < pages.size(); i++)
     std::cout<<"\n Pagina "<< i<< " ha un ranking di "<< pages[i].rank;

   
    
}

void WEB::addLink(int Motherpage, int daughterpage)
{

    web[Motherpage].push_back(daughterpage);
    pages[Motherpage].numberOfLinks++;
}

void WEB::iterateRank()
{
    int npage=pages.size();
    bool convergence{false};
    double* oldP=new double[npage];



    while (!convergence)
    {
        for (int i = 0; i < npage ; i++)
            oldP[i]=pages[i].rank;

        rankUpdate();


        double diff{0.0};     

        for (int i = 0; i < npage; i++)
        {
            diff+=(oldP[i]-pages[i].rank)*(oldP[i]-pages[i].rank);
        }
        
        std::cout<<"\nDiff: "<<diff<<std::endl;
        
        if (diff==0)
            convergence =true;
        
        
        
    }
    





    delete [] oldP;




}

void WEB::initWeb()
{
    int npage=pages.size();

    srand(static_cast<unsigned int>(time(0)));
    
    for (int  i = 0; i < npage; i++)
    {
        int n=rand()%npage;
        
        for (int j = 0; j < n; j++){

          int it=0;
          
        
            
        }
        
        
    }
    
}