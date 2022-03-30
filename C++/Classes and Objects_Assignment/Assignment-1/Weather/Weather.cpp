#include<iostream>
#include<cstring>
#include"Weather.h"
using namespace std;

Weather::Weather(int i, const char *n, double t, double h , double p)
{
    id = i;
    strcpy(cityName,n);
    temprature = t;
    humidity = h;
    pressure = p;
}

void Weather::accept()
{
    cout<<"Enter id , cityname, temprature, humidity, pressure"<<endl;
    cin>>id>>cityName>>temprature>>humidity>>pressure;
}

void Weather :: display()
{
    cout<<"------Weather Info------"<<endl;
    cout<<"Id "<<id<<endl;
    cout<<"City Name "<<cityName<<endl;
    cout<<"Temprature "<<temprature<<endl;
    cout<<"Humidity "<<humidity<<endl;
    cout<<"Pressure "<<pressure<<endl;
}