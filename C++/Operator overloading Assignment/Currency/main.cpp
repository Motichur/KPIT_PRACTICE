#include<iostream>
#include"Currency.h"
using namespace std;
int main()
{
    Currency c, c1(500),c2;
    //c2 = c + c1;
    //c2 = c - c1;
    c2 = ++c1;
    c2.display();
    return 0;
}