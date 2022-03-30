#include<iostream>
#include"Fraction.h"
using namespace std;
int main()
{
    Fraction f1(2,4),f2(3,2),f3;
    //f3 = f1 + f2;
    //f3 = f1 - f2;
    f3 = f1 * f2;
    f3.display();
    return 0;
}