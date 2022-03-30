#include<iostream>
#include"complex.h"
using namespace std;

Complex :: Complex()
{
    real = 5;
    img = 7;
}

Complex :: Complex(int r, int i)
{
    real = r;
    img = i;
}

Complex Complex ::operator+(Complex &c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

Complex Complex ::operator-(Complex &c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

Complex Complex ::operator-()
{
    Complex temp;
    temp.real = -1*real;
    temp.img = -1*img;
    return temp;
}

Complex Complex ::operator++()
{
    Complex temp;
    temp.real = ++real;
    temp.img = ++img;
    return temp;
}

Complex Complex ::operator++(int)
{
    Complex temp;
    temp.real = real++;
    temp.img = img++;
    return temp;
}

ostream & operator << (ostream &out, const Complex &c)
{
    out<<"Complex Number is "<<c.real<<"+"<<c.img<<"i"<<endl;
    return out;
}