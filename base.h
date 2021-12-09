//
// Created by Jadwiga on 07/11/2021.
//

#ifndef ZAD2_METEO_BASE_H
#define ZAD2_METEO_BASE_H


#include "sensor.h"

class CBase
{
public:
    //methods
    void setTemperatureSensor(CTemperatureSensor *);
    void setHumiditySensor(CHumiditySensor *);
    void readSensors();
    void displayMeasurements();


    //fields
    CTemperatureSensor *pTemperatureSensor;
    CHumiditySensor *pHumiditySensor;
    //float temp;
    //float hum;

    struct SMeasurement
    {
        float measuredTemp;
        float measuredHum;
    } SM;

};



#endif //ZAD2_METEO_BASE_H
