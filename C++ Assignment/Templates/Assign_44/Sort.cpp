#include<iostream>
#include"Sort.h"
using namespace std;
template<typename T>
T* sort(T *a, int n)
{
    for(T i=0;i<n-1;i++)
    {
        for(T j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                T temp;
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    return a;
}