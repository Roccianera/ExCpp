#include "JournPaper.h"
#include <sstream>

JournPaper::JournPaper(std::vector<std::string>au,std::string ti,int yr, std::string Mname, int Mnum , int npage) :
    Publication(au, ti , yr),Megazine_name{Mname},megazine_number{Mnum},page{npage} { ++nJpaper;}


JournPaper::~JournPaper(){ --nJpaper;}


std::string JournPaper::toString(){
    std::ostringstream out;
    out <<Publication::toString()<<" " << Megazine_name << " "<< megazine_number << " "<< page<<".";

    return out.str();

}
