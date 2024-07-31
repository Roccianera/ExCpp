#ifndef JOURNPAPER_H
#define JOURNPAPER_H
#include "Publication.h"



class JournPaper: public Publication
{
public:
    static int nJpaper;
    JournPaper(std::vector<std::string>,std::string ,int, std::string, int , int );
    ~JournPaper();

    std::string toString();

private:
std::string Megazine_name;
int megazine_number{1};
int page;


};

#endif