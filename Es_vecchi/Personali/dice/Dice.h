#ifndef DICE_H
#define DICE_H
#include <array>
#include <ctime>
#include <cstdlib>



class Dice
{
public:
    Dice();

    Dice& setDice();
    int getDice()const;
    bool guessNumber()const;
    friend std::ostream& operator<<(std::ostream& out, const Dice& d);
    void getNDice(int n);

    

    

private:
    std::array<int,7> dice_choice{0,1,2,3,4,5,6};
    int nLaunch;
    int result;
};

#endif