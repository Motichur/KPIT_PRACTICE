#include<iostream>
using namespace std;

template<typename T>
T myMax(T *a, int n)
{
    T max =  *(a+0);
    for(int i=0;i<n;i++)
    {
        if(max<*(a+i))
        {
            max = *(a+i);
        }
    }
    return max;
}

template<typename T>
T myMin(T *a, int n)
{
    T min =  *(a+0);
    for(int i=0;i<n;i++)
    {
        if(min>*(a+i))
        {
            min = *(a+i);
        }
    }
    return min;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int a = myMax(arr,5);
    int b = myMin(arr,5);
    cout<<"Maximum element is "<<a<<endl;
    cout<<"Minimum element is "<<b<<endl;
    return 0;
}