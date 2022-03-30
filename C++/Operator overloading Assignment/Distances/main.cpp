#include<iostream>
#include"Distance.h"
using namespace std;
int main()
{
    Distance d,d1(50,75),d2;
    // d2 = d + d1;
    // d2.display();
    // d2 = d - d1;
    // d2.display();
    d2 = ++d1;
    d2.display();
    return 0;
}