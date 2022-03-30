#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex c1(8,9),c2(5,7),c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}