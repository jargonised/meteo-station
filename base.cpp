//
// Created by Jadwiga on 07/11/2021.
//

#include "base.h"
#include "sensor.h"
#include <iostream>


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
    std::cout << "Temperature: " << SM.measuredTemp << std::endl;
    std::cout << "Humidity: " << SM.measuredHum << " %" << std::endl;

}