#include<string>
#include "HeartsRace.h"



class HealthProfile{
    private:
        HeartsRace person{1,2,3, "h","z"};
        std::string gender;
        int height, weight;
    public:

    HealthProfile(int d, int m ,int y, std::string name, std::string surname,std::string gend,int h, int w )
        : person{d,m,y,name,surname},gender{gend},height{h},weight{w}{

        }
    void setName(std::string n){
        person.setName(n);
    }
    std::string getName(){
        return person.getName();

    }


     void setSurname(std::string n){
        person.setSurname(n);
    }
    std::string getSurname(){
        return person.getSurname();
        
    }

    void setPersonbirth(int d, int m , int y){

        person.setBirth(d,m,y);
    }
    
    void getPersonbirth(){

        person.getBirth();
    }

    








};