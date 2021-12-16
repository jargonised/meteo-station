//
// Created by Jadwiga on 07/11/2021.
//

#ifndef ZAD2_METEO_SENSOR_H
#define ZAD2_METEO_SENSOR_H

#include <string>
using namespace std;

class CSensor
{
public:
    //methods
    CSensor(float lowLimit, float highLimit);
    float getMeasurement();
    int checkLimits(float lowLimit, float lowDefault, float highLimit, float highDefault);

    virtual string getName() = 0;
    virtual string getUnit() = 0;

private:
    //methods
    float makeMeasurement();

    //fields
    float lowLimit;
    float highLimit;
    float Measurement;
};
/////////////////////
class CTemperatureSensor: public CSensor
{
public:
    //methods
    CTemperatureSensor(float, float);

    virtual string getName();
    virtual string getUnit();

    //fields

private:
    //methods

    //fields
    float minTemperature;
    float maxTemperature;
    float Temperature;
};
/////////////////////
class CHumiditySensor: public CSensor
{
public:
    //methods
    CHumiditySensor(float, float);
    virtual string getName();
    virtual string getUnit();
   // float getHumidity();

    //fields

private:
    //methods

    //fields
    float minHumidity;
    float maxHumidity;
    float Humidity;
};
/////////////////////
class CPressureSensor: public CSensor
{
public:
    //methods
    CPressureSensor(float, float);
    virtual string getName();
    virtual string getUnit();

private:
    float minPressure;
    float maxPressure;
    float Pressure;

};
/////////////////////
class CWindSensor: public CSensor
{
public:
    //methods
    CWindSensor(float, float);
    virtual string getName();
    virtual string getUnit();

private:
    float minWindSpeed;
    float maxWindSpeed;
    float WindSpeed;

};
/////////////////////
class CInsolationSensor: public CSensor
{
public:
    //methods
    CInsolationSensor(float, float);
    virtual string getName();
    virtual string getUnit();

private:
    float minInsolation;
    float maxInsolation;
    float Insolation;

};


#endif //ZAD2_METEO_SENSOR_H
