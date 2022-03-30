#include<iostream>
#include"MyTime.h"
using namespace std;
int main()
{
    MyTime m(01,40,20),m1(02,40,20),m3;
    // m3 = m+m1;
    //m3 = ++m;
    //m3 = m++;
    m3 = m-m1;
    cout<<m3;
    return 0;
}