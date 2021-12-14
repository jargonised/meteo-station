//
// Created by Jadwiga on 07/11/2021.
//

#include "sensor.h"
#include "rand.h"
#include <iostream>

CSensor::CSensor(float lowLimit, float highLimit) :
        lowLimit(lowLimit),
        highLimit(highLimit)
{}

float CSensor::getMeasurement()
{
    Measurement = makeMeasurement();

    return Measurement;
}

CTemperatureSensor::CTemperatureSensor(float minTemp, float maxTemp)
{
    minTemperature = minTemp;
    maxTemperature = maxTemp;
}

void CTemperatureSensor::makeMeasurement()
{
    Temperature = getRandomNumber(minTemperature, maxTemperature);
}

float CTemperatureSensor ::getTemperature()
{
    makeMeasurement();

    return Temperature;
}

CHumiditySensor::CHumiditySensor(float minHum, float maxHum)
{
    minHumidity = minHum;
    maxHumidity = maxHum;
}

float CHumiditySensor::makeMeasurement()
{
    Humidity = getRandomNumber(minHumidity, maxHumidity);
}

float CHumiditySensor::getHumidity()
{
    makeMeasurement();

    return Humidity;
}


