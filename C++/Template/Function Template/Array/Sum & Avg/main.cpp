#include<iostream>
using namespace std;

template<typename T>
T mySum(T *a, int n)
{
    T sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(a+i);
    }
    return sum;
}

template<typename T>
T myAvg(T sum, int n)
{
    T avg;
    avg = sum/n;
    return avg;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int b = mySum(arr,5);
    cout<<"Sum is "<<b<<endl;
    int c = myAvg(b,5);
    cout<<"Avg is "<<c<<endl;

    float arr1[5] = {1.5f,2.1f,3.8f,4.9f,5.1f};
    float b1 = mySum(arr1,5);
    cout<<"Sum is "<<b1<<endl;
    float c1 = myAvg(b1,5);
    cout<<"Avg is "<<c1<<endl;
    return 0;
}