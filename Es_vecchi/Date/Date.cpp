#include "Date.h"
#include <iostream>
#include <iomanip>

Date::Date(int d, int m , int y)
{
        setDate(d, m ,y);
}

bool Date::operator==(const Date& date2)const{
    if(year!=date2.year) return false;
        if(month!=date2.month) return false;
            if(day!=date2.day) return false;
    return true;
}


bool Date::operator<(const Date& date2)const{
    if(year>date2.year) 
        return false;
    if(year==date2.year&& month< date2.month) 
        return true;
    if(year==date2.year&& month== date2.month&& day< date2.day) 
        return true;
    return false   ;
}

std::string Date ::toString()const{
    std::ostringstream output;

    output<<std::setfill('0')<<std::setw(2)<<day<<"/"<<std::setw(2)
          <<month<<"/"<<year;
    return output.str();

}

Date& Date::operator=(const Date&date2){
    day=date2.day;
    month=date2.month;
    year=date2.year;

    return *this; 
}

std::ostream& operator<<(std::ostream& output, const Date& d){
    std::array<std::string , 13> nameMonth{""};
    output<< d.day << " "<<nameMonth[d.month]<<" "<< d.year;
    return output;
}


