#ifndef PAGE_H
#define PAGE_H


#include  <iostream>
#include <string.h>
#include <list>
#include <vector>

class WEB
{
private:

class Page{
    public:
        Page(double ra, int id, int nlink):pageID{id},numberOfLinks{nlink},rank{ra}{}

    private:
        int pageID;
        double rank;
        int numberOfLinks;
        friend class WEB;
    };

std::vector<Page> pages;
std::list<int>* web;
double delta{0.001};



public:
    WEB(int npages);
    void rankUpdate();
    void printRank();
    void addLink(int Motherpage, int daughterpage);
    void iterateRank();
    void initWeb();


};






#endif