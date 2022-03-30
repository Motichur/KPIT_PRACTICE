#include <iostream>
#include <cstring>
#include "Weather.h"
using namespace std;

Weather::Weather()
{
}

Weather::Weather(int i, const char *n, double t, double h, double p)
{
    cityCode = i;
    strcpy(cityName, n);
    temperature = t;
    humidity = h;
    pressure = p;
}

int Weather::getID()
{
    return cityCode;
}

char *Weather::getName()
{
    return cityName;
}

double Weather::getTemprature()
{
    return temperature;
}

double Weather::getHumidity()
{
    return humidity;
}

double Weather::getPressure()
{
    return pressure;
}

void Weather::display()
{
    cout << "------City Info------" << endl;
    cout << "City Code " << cityCode << endl;
    cout << "City Name " << cityName << endl;
    cout << "Temprature " << temperature << endl;
    cout << "Humidity " << humidity << endl;
    cout << "Pressure " << pressure << endl;
}