#ifndef SENSOR_H
#define SENSOR_H

#include "Date.h"
#include <list>

class Sensor
{
public:
    Sensor(int id, int x, int y):
        id_station{id},coord_x{x},coord_y{y}   {}

    class Measurement {
        public:
        Measurement(Date dd, double p):
            date{dd}, ppm{p}{}
        private:
        Date date;
        double ppm;
        friend class Sensor;

    };

    void insertMesurement(Date dd, double pp);

    double meanPPMInterval( Date d1, Date d2); 
    int getX(){return coord_x;}
    int getY(){return coord_y;}

private:
    int id_station;
    int coord_x;
    int coord_y;
    std::list<Measurement> measures;
};

#endif