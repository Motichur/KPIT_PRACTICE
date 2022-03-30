#include<iostream>
using namespace std;

template<typename T>
void search(T *a, T n, T s)
{
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==s)
        {
            cout<<"Element Found"<<endl;
            break;
        }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    search(arr,5,2);
    return 0;
}