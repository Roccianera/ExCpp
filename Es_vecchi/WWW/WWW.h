#ifndef WWW_H
#define WWW_H
#include <vector>
#include <list>
#include <iostream>

class WWW
{
public:
    class Page{
        public:
            Page(int id , int nl, double p):
            pageID{id },nLinks{nl},P{p}{}
            friend class WWW;
        private:
            int pageID;
            int nLinks;
            double P;  //peso;
    };
    WWW(int npages);                       // prendo il numero di pagine per poi caratterizzaerli 
    void pageRank();   // aggiorna il peso delle pagine 
    void addLink(int, int );   // Linka Le pagine   Lista 1->Lista 3
    void printRanks();
    void iterateRank();
private:
    int nPages;
    std::vector<Page> pages;
    std::list<int>* web;            // ARRAY DI LISTE DI INTERI     
    double delta{0.001};

};

#endif