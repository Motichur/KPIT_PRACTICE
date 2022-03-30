#include<iostream>
#include"Circle.h"
using namespace std;

Circle::Circle(int r)
{
    radius =r;
}

double Circle::area()
{
    double area;
    area = 3.14*radius*radius;
    return area;
}

double Circle::perimeter()
{
    double per;
    per = 2*3.14*radius;
    return per;
}

void Circle::display()
{
    double a = area();
    double b = perimeter();
    cout<<"Area of circle is "<<a<<endl;
    cout<<"Perimeter of Circle is "<<b<<endl;
}