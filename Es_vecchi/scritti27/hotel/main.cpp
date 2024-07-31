#include "Hotel.h"
using namespace std;
#include <vector>
#include <algorithm>

void insert_booking(std::string name, Date dd, int star,vector<Hotel>&  hotels);

int main()
{
    
    vector <Hotel> hotels;

    hotels.push_back(Hotel("ibs",3,22));
    hotels.push_back(Hotel("Trans",6,22));
    hotels.push_back(Hotel("Aswitz",5,22));



    


    sort(hotels.begin(), hotels.end());


    return 0;
}


void insert_booking(std::string name, Date dd, int star, vector<Hotel>& hotels){

    Booking book{name , dd};

    for (int i = 0; i < hotels.size(); i++)
    {
        if(hotels[i].getStar()==star){

            if(hotels[i].checkPrenotaion(book)){
                hotels[i].insertOrder(book);
                return;
            }
        
        }
    }
    
    cout <<"\nNessun hotel disponibile per il giorno richiesto ";

}
