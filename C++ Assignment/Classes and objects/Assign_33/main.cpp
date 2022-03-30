#include<iostream>
#include"Array.h"
using namespace std;
int main()
{
    Array a1;
    a1.display();
    cout<<endl;
    Array a2(10);
    a2.display();
    cout<<endl;
    Array  a3(a2);
    a3.display();
    return 0;
}