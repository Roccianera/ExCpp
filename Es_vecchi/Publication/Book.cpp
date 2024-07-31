#include "Book.h"
#include <sstream>

Book::Book(std::vector<std::string> au ,std::string ti  ,int yr, std::string is, std::string pub):
Publication(au, ti , yr), ISBN{is},publisher{pub}{++nBook;}


Book::~Book()
{
    --nBook;
}

std::string Book::toString(){
    std::ostringstream out;
    out <<Publication::toString()<<" " << ISBN << " "<< publisher << ".";
    
    return out.str();

}