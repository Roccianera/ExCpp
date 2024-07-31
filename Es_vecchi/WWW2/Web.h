#ifndef WEB_H
#define WEB_H

#include <iostream>
#include <string.h>
#include <vector>
#include <list>

class Web
{
public:
    Web(int np);

    class Page
    {
    private:
        int id;
        int nLinks;
        double Rank;
    public:
        Page(int ID, int nl, double rank):
            id{ID},nLinks{nl},Rank{rank}{}
        friend class Web;

    };
    void addLink(int lhs, int rhs);
    void RankUpdate();
    void printRanks();
    ~Web();

private:
    std::vector<Page> pages;
    std::list<int>* Links;
    int Npages;
    double delta{0.001};

};

#endif