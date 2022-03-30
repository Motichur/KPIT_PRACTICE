#include<iostream>
using namespace std;

class Array
{
    int size;
    int *arr;
    public:
    Array();
    Array(int);
    friend istream& operator>>(istream &,Array&);
    friend ostream & operator << (ostream &cout, const Array &a);
    int operator[](int n);
    Array operator!();
    void display();
};

