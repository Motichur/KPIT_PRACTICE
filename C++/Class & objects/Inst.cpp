/*
    Implement a class to represent an Instrument cluster as follows

    speed, rpm, fuel level as data members
    suitable consttructors
    display function
    member function to update the measurements
*/
#include<iostream>
using namespace std;

class Instrument
{
    int speed;
    int rpm;
    int fuel_level;

    public :
    Instrument()
    {
        speed = 20;
        rpm = 100;
        fuel_level = 50;
    }

    Instrument(int s, int r, int f)
    {
        speed = s;
        rpm = r;
        fuel_level = f;
    }

    void disp()
    {
        cout<<"Speed is "<<speed<<endl;
        cout<<"rpm is "<<rpm<<endl;
        cout<<"Remaing fuel Level is "<<fuel_level<<endl;
    }

    void setSpeed(int s)
    {
        speed = s;
    }

    void setRPM(int r)
    {
        rpm = r;
    }

    void setFuelLevel(int f)
    {
        fuel_level = f;
    }
};

int main()
{
    Instrument i1;
    i1.disp();

    Instrument i2(40,150,80);
    i2.disp();

    i2.setFuelLevel(90);
    i2.disp();
    return 0;
}