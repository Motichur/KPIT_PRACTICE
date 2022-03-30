#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

void Complex::accept()
{
    cout<<"Enter real and img part of complex number"<<endl;
    cin>>real>>img;
}

Complex Complex::operator+(Complex &c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.real;
    return temp;
}

Complex Complex::operator-(Complex &c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.real;
    return temp;
}

Complex Complex::operator*(Complex &c)
{
    Complex temp;
    temp.real = real * c.real;
    temp.img = img * c.real;
    return temp;
}

void Complex::display()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}