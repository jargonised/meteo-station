//
// Created by Jadwiga on 07/11/2021.
//

#include "base.h"
#include "sensor.h"
#include <iostream>

CBase::CBase()
{
    numSensors = 0;

}

void CBase::setSensor(CSensor *pSensor)
{
    Sensors[numSensors] = pSensor;
    numSensors++;
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