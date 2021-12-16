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

int CSensor::checkLimits(float lowLimit, float lowDefault, float highLimit, float highDefault)
{
    if((lowLimit < lowDefault) || (highLimit > highDefault))
    {
        if((lowLimit < lowDefault) && (highLimit > highDefault))
        {
            this->lowLimit = lowDefault;
            this->highLimit = highDefault;
            return 3;
        }
        else if(lowLimit < lowDefault)
        {
            this->lowLimit = lowDefault;
            return 1;
        }
        else if(highLimit > highDefault)
        {
            this->highLimit = highDefault;
            return 2;
        }
    }
    else
        return 0;
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
    minTemperature = -50.0;
    maxTemperature = 50.0;

    if (checkLimits(minTemp, minTemperature, maxTemp, maxTemperature) == 1)
    {
        std::cout << "Przekroczono minimalny zakres, przypisano domyslna wartosc: " << minTemperature << " " <<
        getUnit() << std::endl;
    }
    else if (checkLimits(minTemp, minTemperature, maxTemp, maxTemperature) == 2)
    {
        std::cout << "Przekroczono maksymalny zakres, przypisano domyslna wartosc: " << maxTemperature << " " <<
        getUnit() << std::endl;
    }
    else if (checkLimits(minTemp, minTemperature, maxTemp, maxTemperature) == 3)
    {
        std::cout << "Przekroczono minimalny i maksymalny zakres, przypisano domyslne wartosci: " << std::endl;
        std::cout << "Wartosc minimalna: " << minTemperature << " " << getUnit() << std::endl;
        std::cout << "Wartosc maksymalna: " << maxTemperature << " " << getUnit() << std::endl;
    }
    else
    {
        minTemperature = minTemp;
        maxTemperature = maxTemp;
    }
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
    minHumidity = 0.0;
    maxHumidity = 100.0;

    if (checkLimits(minHum, minHumidity, maxHum, maxHumidity) == 1)
    {
        std::cout << "Przekroczono minimalny zakres, przypisano domyslna wartosc: " << minHumidity << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minHum, minHumidity, maxHum, maxHumidity) == 2)
    {
        std::cout << "Przekroczono maksymalny zakres, przypisano domyslna wartosc: " << maxHumidity << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minHum, minHumidity, maxHum, maxHumidity) == 3)
    {
        std::cout << "Przekroczono minimalny i maksymalny zakres, przypisano domyslne wartosci: " << std::endl;
        std::cout << "Wartosc minimalna: " << minHumidity << " " << getUnit() << std::endl;
        std::cout << "Wartosc maksymalna: " << maxHumidity << " " << getUnit() << std::endl;
    }
    else
    {
        minHumidity = minHum;
        maxHumidity = maxHum;
    }
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
    minPressure = 800.0;
    maxPressure = 1100.0;

    if (checkLimits(minPress, minPressure, maxPress, maxPressure) == 1)
    {
        std::cout << "Przekroczono minimalny zakres, przypisano domyslna wartosc: " << minPressure << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minPress, minPressure, maxPress, maxPressure) == 2)
    {
        std::cout << "Przekroczono maksymalny zakres, przypisano domyslna wartosc: " << maxPressure << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minPress, minPressure, maxPress, maxPressure) == 3)
    {
        std::cout << "Przekroczono minimalny i maksymalny zakres, przypisano domyslne wartosci: " << std::endl;
        std::cout << "Wartosc minimalna: " << minPressure << " " << getUnit() << std::endl;
        std::cout << "Wartosc maksymalna: " << maxPressure << " " << getUnit() << std::endl;
    }
    else
    {
        minPressure = minPress;
        maxPressure = maxPress;
    }
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
    minWindSpeed = 0.0;
    maxWindSpeed = 200.0;

    if (checkLimits(minWSpeed, minWindSpeed, maxWSpeed, maxWindSpeed) == 1)
    {
        std::cout << "Przekroczono minimalny zakres, przypisano domyslna wartosc: " << minWindSpeed << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minWSpeed, minWindSpeed, maxWSpeed, maxWindSpeed) == 2)
    {
        std::cout << "Przekroczono maksymalny zakres, przypisano domyslna wartosc: " << maxWindSpeed << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minWSpeed, minWindSpeed, maxWSpeed, maxWindSpeed) == 3)
    {
        std::cout << "Przekroczono minimalny i maksymalny zakres, przypisano domyslne wartosci: " << std::endl;
        std::cout << "Wartosc minimalna: " << minWindSpeed << " " << getUnit() << std::endl;
        std::cout << "Wartosc maksymalna: " << maxWindSpeed << " " << getUnit() << std::endl;
    }
    else
    {
        minWindSpeed = minWSpeed;
        maxWindSpeed = maxWSpeed;
    }
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
    minInsolation = 0.1;
    maxInsolation = 10.0;

    if (checkLimits(minIns, minInsolation, maxIns, maxInsolation) == 1)
    {
        std::cout << "Przekroczono minimalny zakres, przypisano domyslna wartosc: " << minInsolation << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minIns, minInsolation, maxIns, maxInsolation) == 2)
    {
        std::cout << "Przekroczono maksymalny zakres, przypisano domyslna wartosc: " << maxInsolation << " " <<
                  getUnit() << std::endl;
    }
    else if (checkLimits(minIns, minInsolation, maxIns, maxInsolation) == 3)
    {
        std::cout << "Przekroczono minimalny i maksymalny zakres, przypisano domyslne wartosci: " << std::endl;
        std::cout << "Wartosc minimalna: " << minInsolation << " " << getUnit() << std::endl;
        std::cout << "Wartosc maksymalna: " << maxInsolation << " " << getUnit() << std::endl;
    }
    else
    {
        minInsolation = minIns;
        maxInsolation = maxIns;
    }
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