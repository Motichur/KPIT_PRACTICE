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

int Complex :: getReal()
{
    return real;
}

void Complex::setreal(int r)
{
    real = r;
}

int Complex :: getImg()
{
    return img;
}

void Complex :: setImg(int i)
{
    img = i;
}

void Complex :: display()
{
    cout<<"Complex Number is "<<real<<"+"<<img<<"i"<<endl;
}