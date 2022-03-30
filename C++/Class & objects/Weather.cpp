/*
    Implement Weather class as follows

    city name, temperature, humidity, pressure as data members.
    Suitable constructors - default, parameters
    Function to display the weather state of a city
    Apply const suffix wherever possible
*/
#include<iostream>
using namespace std;

class Weather
{
    string city_name;
    double temprature;
    double humidity;
    double pressure;

    public:
    Weather()
    {
        city_name = "Pune";
        temprature = 25;
        humidity = 97;
        pressure = 20;
    }

    Weather(string c, double t, double h, double p)
    {
        city_name = c;
        temprature = t;
        humidity = h;
        pressure = p;
    }

    void disp()
    {
        cout<<"Name of city is "<<city_name<<endl;
        cout<<"Temprature of "<<city_name<<" is "<<temprature<<endl;
        cout<<"Humidity of "<<city_name<<" is "<<humidity<<endl;
        cout<<"Pressure of "<<city_name<<" is "<<pressure<<endl;
    }
};

int main()
{
    Weather w1;
    w1.disp();

    Weather w2("Mumbai",27,40,50);
    w2.disp();
    return 0;
}