#include <iostream>	//Plik nagłówkowy oraz ...
using namespace std;	//... polecenie użycia nazw z przestrzeni std - niezbędne do poprawnego działania funkcji displayMeasurements()

#include <unistd.h>	//Plik nagłówkowy, w kórym jest zadeklarowana użyta poniżej funkcja sleep()

#include "sensor.h"	//Plik nagłówkowy, w kórym należy zadeklarować klasy reprezentujące czujniki
#include "base.h"		//Plik nagłówkowy, w kórym należy zadeklarować klasę reprezentującą stację bazową


int main()
{
    srand(time(NULL));

	CTemperatureSensor TemperatureSensor(-50.0, 50.0);	//Utworzenie obiektu reprezentującego czujnik temperatury
	CHumiditySensor HumiditySensor(0,100);			//Utworzenie obiektu reprezentującego czujnik wilgotności
	CBase Base;										//Utworzenie obiektu reprezentującego stację bazową


	Base.setTemperatureSensor(&TemperatureSensor);	//Przekazanie stacji bazowej adresu czujnika temperatury
	Base.setHumiditySensor(&HumiditySensor);			//Przekazanie stacji bazowej adresu czujnika wilgotności

	while(true)							//Pętla nieskończona (przerwanie programu wymaga użycia klwiszy Ctrl+C)
	{
		Base.readSensors();							//Odczyt danych z czujników
		Base.displayMeasurements();				//Wyświetlenie danych w konsoli
		sleep(3);										//3-sekundowa pauza
	};

	return 0;
}
