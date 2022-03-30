#include<iostream>
using namespace std;

template<typename T>
void myswap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=10, b = 20;
    myswap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}