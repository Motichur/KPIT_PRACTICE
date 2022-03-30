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

Array :: Array(Array &a)
{
    size = a.size;
    arr = new int[size]{0};
}

void Array::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

Array::~Array()
{
    cout<<"Destructor is called"<<endl;
}