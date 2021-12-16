//
// Created by Jadwiga on 07/11/2021.
//

#include "sensor.h"
#include "rand.h"
#include <iostream>

// CSensor
CSensor::CSensor(float lowLimit, float highLimit) :
        lowLimit(lowLimit),
        highLimit(highLimit)
{}

float CSensor::makeMeasurement()
{
    return getRandomNumber(lowLimit, highLimit);
}

float CSensor::getMeasurement()
{
    Measurement = makeMeasurement();

    return Measurement;
}
/////////////////////
// CTemperatureSensor
CTemperatureSensor::CTemperatureSensor(float minTemp, float maxTemp):CSensor(minTemp, maxTemp)
{
    minTemperature = minTemp;
    maxTemperature = maxTemp;
    Temperature = CSensor::getMeasurement();
}

string CTemperatureSensor::getName()
{
    return "temperature";
}

string CTemperatureSensor::getUnit()
{
    return "stop. Celsjusza";
}
/////////////////////
// CHumiditySensor
CHumiditySensor::CHumiditySensor(float minHum, float maxHum):CSensor(minHum, maxHum)
{
    minHumidity = minHum;
    maxHumidity = maxHum;
    Humidity = CSensor::getMeasurement();
}

string CHumiditySensor::getName()
{
    return "humidity";
}

string CHumiditySensor::getUnit()
{
    return "%";
}
/////////////////////
// CPressureSensor
CPressureSensor::CPressureSensor(float minPress, float maxPress):CSensor(minPress, maxPress)
{
    minPressure = minPress;
    maxPressure = maxPress;
    Pressure = CSensor::getMeasurement();
}

string CPressureSensor::getName()
{
    return "atmospheric pressure";
}

string CPressureSensor::getUnit()
{
    return "hPa";
}
/////////////////////
// CWindSensor
CWindSensor::CWindSensor(float minWSpeed, float maxWSpeed):CSensor(minWSpeed, maxWSpeed)
{
    minWindSpeed = minWSpeed;
    maxWindSpeed = maxWSpeed;
    WindSpeed = CSensor::getMeasurement();
}

string CWindSensor::getName()
{
    return "wind speed";
}

string CWindSensor::getUnit()
{
    return "m/s";
}
/////////////////////
// CInsolationSensor
CInsolationSensor::CInsolationSensor(float minIns, float maxIns):CSensor(minIns, maxIns)
{
    minInsolation = minIns;
    maxInsolation = maxIns;
    Insolation = CSensor::getMeasurement();
}

string CInsolationSensor::getName()
{
    return "insolation";
}

string CInsolationSensor::getUnit()
{
    return "W/m^2";
}