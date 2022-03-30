#include<iostream>
#include"Array.h"
using namespace std;
int main()
{
    Matrix m1;
    cout<<"Enter Matrix elements"<<endl;
    m1.accept();
    // cout<<"end"<<endl;
    // Matrix m2;
    // m2.accept();
    // Matrix m3;
    // m3 = m1 + m2;
    // cout<<"m3 mat"<<endl;
    Matrix m2;
    m2 =! m1;
    m2.display();
    return 0;
}