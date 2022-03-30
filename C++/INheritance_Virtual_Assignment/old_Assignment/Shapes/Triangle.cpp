#include<iostream>
#include"Triangle.h"
using namespace std;

Triangle::Triangle(int len, int bre, int side, int hei)
{
    s1 = len;
    b = bre;
    s2 = side;
    h = hei;
}

double Triangle:: area()
{
    double area;
    area = 0.5*h*b;
    return area;
}

double Triangle::perimeter()
{
    double per;
    per = s1+b+s2;
    return per;
}

void Triangle::display()
{
    double a = area();
    double b = perimeter();
    cout<<"Area of Triangle is "<<a<<endl;
    cout<<"Perimeter of Triangle is "<<b<<endl;
}