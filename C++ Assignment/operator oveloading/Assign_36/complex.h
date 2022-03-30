
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    Complex();
    Complex(int,int);
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator-();
    Complex operator++();
    Complex operator++(int);
    friend ostream & operator << (ostream &out, const Complex &c);
    void accept();
    void display();
};