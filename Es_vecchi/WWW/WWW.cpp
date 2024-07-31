#include "WWW.h"-ò



WWW::WWW(int npages):nPages{npages}{
    
    web=new std::list<int>[npages];
    for (int i = 0; i < npages; i++){
        Page p(i,0,static_cast<double> (1.0)/npages);
        pages.push_back(p);
    }

    

}

void WWW::pageRank(){

    double *newP= new double[nPages];

    for (int i = 0; i < nPages; i++){
        for (auto j = web[i].begin() ; j!=web[i].end() ; j++){
            
            newP[*j]+=pages[i].P/pages[i].nLinks;
        }
        
    }

    for (int i = 0; i < nPages; i++)
    {
        pages[i].P=(1.0-delta)/nPages +delta *newP[i];
    }
        
    delete [] newP;
}



void WWW::addLink(int pa , int pb){
    
    web[pa].push_front(pb);
    pages[pa].nLinks++;
       
}

void WWW::printRanks()
{

    for (int i = 0; i < nPages; i++)
    {
        std::cout<< "Page "<< i <<"\t ranks: "<<pages[i].P << "\n ";
    }
    
}

void WWW::iterateRank()
{
    // run page ranks multi times unti convergense
    bool convergence{false};
    double* prevP=new double[nPages];  
        // i vecchi pageRank
    while (!convergence)
    {   
        for (int i = 0; i < nPages; i++)
           prevP[i]=pages[i].P;
           
        //run pageRank
        pageRank();
        // check convergence

        double diff{0};
        for (int i = 0; i < nPages; i++)
        
            diff+=(prevP[i]-pages[i].P)*(prevP[i]-pages[i].P);

        std::cout<<"\n Diff: "<<diff<<std::endl;
        if(diff<1e-20)
            convergence=true;       

    }
    
    delete[] prevP;
}




