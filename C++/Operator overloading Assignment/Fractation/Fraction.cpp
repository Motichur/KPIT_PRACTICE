#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction ::Fraction(int n, int d)
{
    numerator = n;
    denometor = d;
}

Fraction Fraction::operator+(Fraction &f)
{
    Fraction temp;
    if (denometor != f.denometor)
    {
        numerator = numerator * f.denometor;
        f.numerator = f.numerator * denometor;
        temp.numerator = numerator + f.numerator;
        temp.denometor = denometor * f.denometor;
    }
    else
    {
        temp.numerator = numerator + f.numerator;
        temp.denometor = denometor;
    }
    return temp;
}

Fraction Fraction::operator-(Fraction &f)
{
    Fraction temp;
    if (denometor != f.denometor)
    {
        numerator = numerator * f.denometor;
        f.numerator = f.numerator * denometor;
        temp.numerator = numerator - f.numerator;
        temp.denometor = denometor * f.denometor;
    }
    else
    {
        temp.numerator = numerator - f.numerator;
        temp.denometor = denometor;
    }
    return temp;
}

Fraction Fraction::operator*(Fraction &f)
{
    Fraction temp;
    temp.numerator = numerator*f.numerator;
    temp.denometor = denometor*f.denometor;
    return temp;
}

void Fraction::display()
{
    cout << numerator << "/" << denometor << endl;
}