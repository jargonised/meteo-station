//
// Created by Jadwiga on 07/11/2021.
//

#ifndef ZAD2_METEO_BASE_H
#define ZAD2_METEO_BASE_H

#include <assert.h>	//Plik nagłówkowy niezbędny do poprawnego działania funkcji assert()
#include "sensor.h"

#define MAX_NUMBER_OF_SENSORS 5


class CBase
{
public:
    //methods
    void setTemperatureSensor(CTemperatureSensor *);
    void setHumiditySensor(CHumiditySensor *);
    void readSensors();
    void displayMeasurements(); //Metoda pobierająca i wyświetlająca w konsoli dane z czujników
    CBase(); //Konstruktor
    void setSensor(CSensor* pSensor); //Metoda dodająca adresy kolejnych czujników


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

private:
    //methods

    //fields
    CSensor* Sensors[MAX_NUMBER_OF_SENSORS]; //Wektor przechowujący adresy obiektów reprezentujących czujniki
    ???		//Zmienna określająca ilość dodanych adresów czujników



};



#endif //ZAD2_METEO_BASE_H
