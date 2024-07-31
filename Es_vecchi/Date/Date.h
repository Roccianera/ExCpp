#ifndef DATE_H
#define DATE_H
#include<string.h>
#include <ostream>
#include <sstream>
#include <array>

class Date
{
public:
    Date(int=1, int=1, int=2000);
    Date(const Date&);
    Date& operator=(const Date&);
    Date& setDate(int, int , int );
    bool operator==(const Date&)const;
    bool operator<(const Date &)const;
    std::string toString()const;
    friend std::ostream& operator<<(std::ostream&,const Date&);        



private:
    int year , month , day;

};

#endif