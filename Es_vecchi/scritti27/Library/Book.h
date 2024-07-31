#ifndef BOOK_H
#define BOOK_H

#include <string.h>
#include <vector>
#include <iostream>

class Book
{
public:
    Book(int id ,std::string titleofbook, std::vector<std::string> au, int yy, double val , std::string posiz ):
        book_id{id}, title{titleofbook}, year{yy}, position {posiz}, value{val},authors{au}{}
   virtual bool operator<(const Book& rhs)const;
   virtual void print() const;     
    

private:
    int book_id;
    std::vector<std::string> authors;
    std::string title;
    int year;
    std::string position;
    double value ;
};

bool Book::operator<(const Book& rhs)const{

        if(authors<rhs.authors) return true;
        return year<rhs.year;
   }

void Bool::print()const{


}



#endif


