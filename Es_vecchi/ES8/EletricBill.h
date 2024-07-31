#include<string>



class EletricBill
{
private:
    double amountPaid;
public:

    explicit EletricBill(double d)
        :amountPaid{0}{
        setAmountPaid(d);

    }

    void setAmountPaid(double d){
        amountPaid=d;
        if(amountPaid<0) amountPaid=0;
    }

    double getAmountPaid()const{
        return amountPaid;
    }

    double getVAT()const{


        return (0.18); 
    }

    double getEWURA()const{
        return (0.01);
    }

    double getREA()const{

        return (0.03);
    }

    double getUnits()const{


        return amountPaid*(1-getVAT()-getEWURA()-getREA())/295;

    }




  
};


