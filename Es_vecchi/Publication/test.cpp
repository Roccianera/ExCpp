#include "Publication.h"
#include "Book.h"
#include "JournPaper.h"
#include "ConfPaper.h"
#include <iostream>
#include <algorithm>


int Book::nBook=0; // va sempre inizializata
int JournPaper::nJpaper=0;
int ConfPaper::nCpaper=0;

bool comparePubsPtr(Publication* A, Publication*B){ return *A<*B;}

int main(int argc, char const *argv[])
{
    std::vector<Publication*> bib;


    bib.push_back(new Publication({"Giovanni Bianchi ", "Michele Rossi"}, " a great Book ", 2002));
    bib.push_back(new Book({"Albert qualcosa", "John labravo"}, " Introduction to Computer ", 1974,"9239239212","Prentice ALL"));   
    bib.push_back(new Book({" Donald qualcosa"}, " The aRt ", 1968,"9239239212","Prentice ALL")); 


    //quickSort(bib,0,bib.size()-1 );  
    std::sort(bib.begin(),bib.end(),comparePubsPtr);  //comaprePubs serve a sort per sapere come confrontare è obbligatorio
    // se non gli metto la funzione di comparazione non mi ordina un cazzo , anzi ha ordinato i puntatori che ovviamente dato che che new sono consecutivi sono gia ordinati 



    for (size_t i = 0; i < bib.size(); i++)
    {
        std::cout<< bib[i]->toString()<<std::endl;

    }
    std::cout<<"\n Number of bool in bibliografy "<< Book::nBook <<std::endl;
     return 0;
}
