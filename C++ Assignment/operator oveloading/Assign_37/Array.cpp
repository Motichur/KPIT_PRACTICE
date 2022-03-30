#include<iostream>
#include"Array.h"
using namespace std;

Array :: Array()
{
    size = 5;
    arr = new int[size]{0};
}

Array :: Array(int n)
{
    size = n;
    arr = new int[size]{0};
}

int Array :: operator[](int n)
{
    int temp;
    temp = arr[n];
    return temp;
}

istream& operator>>(istream &cin, Array &A)
{
    cin>>A.size;
    for(int i=0;i<A.size;i++)
    {
        cin>>A.arr[i];
    }
}

Array Array :: operator!()
{
    Array temp;
    for(int i=0;i<size;i++)
    {
        temp.arr[size-1-i] = arr[i];
    }
    return temp;
}

ostream& operator<<(ostream &cout,const Array &a)
{
    for(int i=0;i<a.size;i++)
    {
        cout<<a.arr[i]<<" ";
    }   
    cout<<endl;
    return cout;
}

