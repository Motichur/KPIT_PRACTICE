#include<iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(int len,int bre)
{
    l = len;
    b = bre;
}

double Rectangle::area()
{
    double area;
    area = l*b;
    return area;
}

double Rectangle::perimeter()
{
    double per;
    per = 2*(l+b);
    return per;
}

void Rectangle::display()
{
    double a = area();
    double b = perimeter();
    cout<<"Area of Rectangle is "<<a<<endl;
    cout<<"Perimeter of Rectangle is "<<b<<endl;
}