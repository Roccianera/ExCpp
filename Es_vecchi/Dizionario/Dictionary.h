#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>
#include <string.h>



class Word
{
public:

    Word(std::string, std::string);
    std::string getEngWord();
    std::string getItWord();
    void SetEngWord(std::string);
    void SetItWord(std::string);

    


private:
    std::string engWord;
    std::string itWord;

};

#endif