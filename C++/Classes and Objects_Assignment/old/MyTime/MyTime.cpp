#include<iostream>
#include"MyTime.h"
using namespace std;

MyTime::MyTime(int h, int m ,int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

void MyTime:: accept()
{
    cout<<"Enter hours, minutes and seconds of time"<<endl;
    cin>>hours>>minutes>>seconds;
}

void MyTime ::display()
{
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}