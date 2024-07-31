#include <iostream>

#include "BlueSky.h"




int main(int argc, char const *argv[])
{
    BlueSky myBlueSky;

    myBlueSky.addSensor(5,5);
    myBlueSky.addSensor(5,6);
    myBlueSky.addSensor(6,6);
    myBlueSky.addSensor(7,5);
    myBlueSky.addSensor(7,7);


    myBlueSky.addMeasurement(0,Date(1,1,2021),0.5);
    myBlueSky.addMeasurement(0,Date(2,1,2021),0.7);
    myBlueSky.addMeasurement(0,Date(3,1,2021),0.9);




    myBlueSky.addMeasurement(1,Date(1,1,2021),0.5);
    myBlueSky.addMeasurement(1,Date(2,1,2021),0.1);
    myBlueSky.addMeasurement(1,Date(3,1,2021),0.8);

    myBlueSky.addMeasurement(0,Date(1,1,2021),0.1);
    myBlueSky.addMeasurement(0,Date(2,1,2021),0.9);
    myBlueSky.addMeasurement(0,Date(3,1,2021),0.9);


    myBlueSky.MeanC02zone(4,4,6,6);
    return 0;
}
