//
// Created by Jadwiga on 07/11/2021.
//

#include "sensor.h"
#include "rand.h"
#include <iostream>

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

void CHumiditySensor::makeMeasurement()
{
    Humidity = getRandomNumber(minHumidity, maxHumidity);
}

float CHumiditySensor::getHumidity()
{
    makeMeasurement();

    return Humidity;
}


