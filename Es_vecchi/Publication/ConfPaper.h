#ifndef CONFPAPER_H
#define CONFPAPER_H
#include "Publication.h"


class ConfPaper: public Publication
{
public:
    static int nCpaper;

    ConfPaper(std::vector<std::string>,std::string ,int, std::string, std::string , int );
    ~ConfPaper();
    std::string toString();

private:
    std::string title_conf;
    std::string  place;
    int page;

};

#endif