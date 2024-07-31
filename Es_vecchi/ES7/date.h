#include<string>
#include<iostream>

class Date{
    private:
        int month;
        int day;
        int year;

    public:
        Date(int m , int d ,int y )
            : day{d},year{y}{
                if(m<1 || m>12)
                    month=1;
                else 
                    month=m;    

            }
        
        void setMonth(int m ){
                if(m<1 || m>12)
                    month=1;
                else 
                    month=m;                


        }
        int getMonth() const{
            return month;
        }


        void setDay(int d){
            day=d;
        }

        int getDay() const{

            return day;

        }


        void setYear(int y){
            year=y;
        }

        int getYear() const{

            return year;
        }
        

        void displayDate() const{


            std::cout<<"La data e' : "<< day<<"\\"<<month<<"\\"<<year<<std::endl;
        }
};