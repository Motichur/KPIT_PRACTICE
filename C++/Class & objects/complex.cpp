/*
    Write a program to implement Complex number as an abstract data type

    real, imaginary parts  as data members
    Suitable constructors - default, parameterized, copy constructors
    A function to display the complex number in a+bi format
*/
#include<iostream>
using namespace std;
class Complex
{
    int img;
    int real;
    public:
    Complex()
    {
        img = 7;
        real =5;
    }
    Complex(int i, int r)
    {
        img = i;
        real =r;
    }
    void disp()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    c1.disp();

    Complex c2(10,12);
    c2.disp();
    return 0;
}