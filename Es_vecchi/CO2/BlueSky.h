#ifndef BLUESKY_H
#define BLUESKY_H

#include"Sensor.h"
#include <vector>


class BlueSky
{
public:
    BlueSky():n_sensor{0} {}
    ~BlueSky();
    void addMeasurement(int id , Date dd, double pp);
    double MeanC02zone( int, int  , int ,int, Date d1, Date d2);
    void addSensor( int x, int  y );

private:
    std::vector<Sensor> sensors;
    int n_sensor;

};

#endif