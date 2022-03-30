#include<iostream>
using namespace std;

template<typename T>
class MyArray
{
    T arr[50];
    public:
    void accept();
    void display();
    void mySum();
    void myAvg();
};


template<typename T>
void MyArray<T>:: mySum()
{
    T sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}

template<typename T>
void MyArray<T>:: myAvg()
{
    T avg;
    avg = sum/n;
    cout<<avg<<endl;
}

template<typename T>
void MyArray<T>::accept()
{
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}

template<typename T>
void MyArray<T>::display()
{
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    MyArray<int> m;
    m.accept();
    m.mySum();
    m.myAvg();
    return 0;
}