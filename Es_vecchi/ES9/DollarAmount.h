#include<string>
#include<cmath>



class DollarAmount{
private:
    long dollar{0};
    long cents{0};
    

    void Correction(long c){
            if(c>=100){
                dollar+=cents/100;
                cents%=100;
            }

    }
public:
    DollarAmount(long d, long c)
        : dollar{d},cents{c}{
            Correction(c);
        }

    void add(DollarAmount right){

            dollar+=right.dollar;
            cents+=right.cents;
            Correction(c);
    }

    void substract(DollarAmount right){

            dollar+=right.dollar;
            cents+=right.cents;
            Correction(c);
    }
    
};