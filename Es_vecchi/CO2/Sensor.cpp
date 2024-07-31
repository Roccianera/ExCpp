#include "Sensor.h"


void Sensor::insertMesurement(Date dd, double pp)
{
    Measurement meas{dd,pp};
    
    for (auto iter=measures.begin(); iter !=measures.end(); iter++)
    {
        if (meas.date<iter->date)
        {
            measures.insert(iter, meas);
            return;
        }
        
    }
        measures.push_back(meas);
    


}

double Sensor::meanPPMInterval( Date d1, Date d2)
{
    double sum{0};
    double count{0};
    
    for (auto iter= measures.begin(); iter != measures.end(); iter++)
    {
        if( iter->date <d2 &&  d1<iter->date )
            {
                count++;
                sum+=iter->ppm;
            }
            if(iter->date<d2) break;
    }

    if(count==0)
        return 0.0;
    return sum/count;
}