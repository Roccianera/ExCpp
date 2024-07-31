#include "BlueSky.h"


void BlueSky::addMeasurement(int id , Date dd, double pp)
{
    sensors[id].insertMesurement(dd,pp);
}

double BlueSky::MeanC02zone(int x_u_l ,int y_u_l ,int x_u_r ,int y_u_r ,Date d1, Date d2)
{
    int count{0};
    double sum{0.0};
    double mean{0.0};
    for (int i = 0; i < sensors.size(); i++)
    {
        int x= sensors[i].getX();
        int y= sensors[i].getY();
        if(x>=x_u_l&& y>=y_u_l  &&
            x<=x_u_r && y<=y_u_r){
                sum+=sensors[i].meanPPMInterval(d1,d2);
                count++;
            }
    }
    if(count>0) mean = sum/count;

    return mean;

    
}

void BlueSky::addSensor(int x, int  y){
    Sensor s(n_sensor,x,y);
    sensors.push_back(s);
    n_sensor++;

}