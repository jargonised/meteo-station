//
// Created by Jadwiga on 07/11/2021.
//

#ifndef ZAD2_METEO_SENSOR_H
#define ZAD2_METEO_SENSOR_H


class CTemperatureSensor
{
public:
    //methods
    CTemperatureSensor(float, float);
    void makeMeasurement();
    float getTemperature();

    //fields


private:
    //methods

    //fields
    float minTemperature;
    float maxTemperature;
    float Temperature;
};

class CHumiditySensor
{
public:
    //methods
    CHumiditySensor(float, float);
    void makeMeasurement();
    float getHumidity();

    //fields

private:
    //methods

    //fields
    float minHumidity;
    float maxHumidity;
    float Humidity;
};



#endif //ZAD2_METEO_SENSOR_H
