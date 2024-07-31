#include "ConfPaper.h"
#include <sstream>

ConfPaper::ConfPaper(std::vector<std::string>au,std::string ti,int yr, std::string Cti, std::string pl , int npage):
    Publication(au, ti , yr),title_conf{Cti},place{pl},page{npage} { ++nCpaper;}


ConfPaper::~ConfPaper()
{
 --nCpaper;
}


std::string ConfPaper::toString(){
    std::ostringstream out;
    out <<Publication::toString()<<" " << title_conf << " "<< place << " "<< page<<".";

    return out.str();

}
