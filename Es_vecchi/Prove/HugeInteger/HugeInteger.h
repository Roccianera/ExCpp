

#ifndef HUGEINTGER
#define HUGEINTGER
#include <array>

class HugeInteger
{
private:
    std::array <int,40 > H_intger;
public:
    HugeInteger();
    ~HugeInteger();
    void setHintger(HugeInteger);
    void getHintger();

    void add(HugeInteger);
    void substract(HugeInteger);

    bool isNotEqualTo(HugeInteger);
    bool isGreaterThan(HugeInteger);

};







#endif