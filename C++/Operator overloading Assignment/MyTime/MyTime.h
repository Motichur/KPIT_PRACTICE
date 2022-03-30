#include <iostream>
using namespace std;

class MyTime
{
    int hours;
    int minutes;
    int seconds;
    public:
    MyTime(int=00, int=00, int =00);
    void display();
    void accept();
    MyTime operator+(MyTime &);
    MyTime operator-(MyTime &);
    MyTime operator++();
    MyTime operator++(int);
    MyTime operator--();
    friend ostream operator<<(ostream &,const MyTime &);
    friend istream operator>>(istream &,const MyTime &);
};