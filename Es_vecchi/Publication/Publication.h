#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <string>
#include <vector>



class Publication
{
public:
    Publication(std::vector<std::string>,std::string ,int);

    const std::vector<std::string>&getAuthors();// se non ci metto il riferimento mi copia tutto il vettore nel vettore membro 
    //ci metto il const per impedire di modificare il vettore membero 
    Publication& setAuthors(const std::vector<std::string>&);
    // in questa maniera se evito di usare void posso settare in cascata
    

    bool operator<(const Publication&);
    
    virtual std::string toString();

private:
    std::string title;
    std::vector<std::string> authors;
    int year{2000};
};








class Paper: public Publication{

public:
    Paper();

private:

    std::string Megazine_name;
    int Megazine_number;
    int page_number;
    

};



class ConfPaper: public Publication{

public:
    ConfPaper();
     ~ConfPaper();

private:

    std::string conf_name;
    std::string ISBN;

};








#endif