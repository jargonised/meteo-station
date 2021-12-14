//
// Created by Jadwiga on 07/11/2021.
//

#include "base.h"
#include "sensor.h"
#include <iostream>

CBase::CBase()
{

}

void setSensor(CSensor* pSensor)
{

}

void CBase::setTemperatureSensor(CTemperatureSensor *pTemperatureSensor)
{
    this->pTemperatureSensor = pTemperatureSensor; //this adres do obiektu na rzecz ktorego wykonujemy metode
}

void CBase::setHumiditySensor(CHumiditySensor *pHumiditySensor)
{
    this->pHumiditySensor = pHumiditySensor;
}

void CBase::readSensors()
{
    SM.measuredTemp = this->pTemperatureSensor->getTemperature();
    SM.measuredHum = this->pHumiditySensor->getHumidity();
}

void CBase::displayMeasurements()
{
    for(unsigned int i=0; i<numSensors; ++i)
    {
        CSensor* pSensor = Sensors[i];
        std::cout << "Current " << pSensor->getName() << ": " << pSensor->getMeasurement() << ' ' << pSensor->getUnit()
        << std::endl;
    }
    std::cout << std::endl;
}