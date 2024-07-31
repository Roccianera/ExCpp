#ifndef BORROWBOOK_H
#define BORROWBOOK_H

#include "Book.h"
#include "Date\Date.h"

class Borrowbook : public Book
{
public:
    Borrowbook(Book& bb, Date dd):
        Book(bb),dateBegin{dd},dateEnd{dd+60}{}

private:
    Date dateBegin;
    Date dateEnd;


};

#endif