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

MyTime MyTime::operator+(MyTime &m)
{
    MyTime temp;
    temp.seconds = seconds + m.seconds;
    return temp;
}

MyTime MyTime::operator-(MyTime &m)
{
    MyTime temp;
    temp.seconds = seconds - m.seconds;
    return temp;
}

MyTime MyTime::operator++()
{
    MyTime temp;
    temp.seconds = ++seconds;
    return temp;
}

MyTime MyTime::operator++(int)
{
    MyTime temp;
    temp.seconds = seconds++;
    return temp;
}

MyTime MyTime::operator--()
{
    MyTime temp;
    temp.seconds = seconds--;
    return temp;
}

ostream operator<<(ostream &cout,const MyTime &m)
{
    cout<<m.seconds<<endl;
}

istream operator>>(istream &cin,const MyTime &m)
{
    cin>>m.seconds;
}

void MyTime ::display()
{
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}