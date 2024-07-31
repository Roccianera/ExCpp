#include "Doctor.h"
#include <algorithm>
  void addAppointment( std::vector<Doctor> &dd , Prenotation& pp);

  //void InsDoc(std::vector<Doctor>& docs, Doctor & doc);

int main()
{   
    
    std::vector<Doctor> docs;
    docs.push_back(Doctor("mario","rossi"));
    docs.push_back(Doctor("giulio","Regani"));
    docs.push_back(Doctor("Dario","Moccia"));
    Prenotation p1{"p1","l1","mario"};
    Prenotation p2{"p2","p2","giulio"};
    Prenotation p3{"p3","l3","mario"};

    addAppointment(docs,p1);
    addAppointment(docs,p2);
    addAppointment(docs,p3);






    for (int i = 0; i < docs.size(); i++)
    {
        docs[i].print();
    }


    return 0;
}

/*
void InsDoc(std::vector<Doctor>& docs ,const Doctor & doc){

    std::vector<Doctor>::iterator iter;
    for ( iter != docs.begin() ; iter !=docs.end(); iter++)
    {
        if(doc<*iter) break;   
    }
    

}*/

  void addAppointment( std::vector<Doctor> &dd , Prenotation& pp){

  int dim = dd.size();
  for (int i = 0; i < dim; i++)
  {
    if(pp.getDoc()==dd[i].getName()){
        dd[i].addAppointment(pp);
        int old_i=i;
        for (int j = old_i+1; j < dim; j++)
        {
            if(dd[j]<dd[i]){
                std::swap(dd[i],dd[j]);
                i=j;

            }else break;
        }
        
        return;
    }
  }
  
    
    throw std::invalid_argument {"No such doctor"};


  }
