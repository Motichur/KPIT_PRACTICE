#include<iostream>
using namespace std;

template<typename T>
void mysort(T *a, int n)
{
    T temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}

int main()
{
    int arr[5]={1,7,4,9,5};
    mysort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float arr1[5]={1.4f,7.4f,4.7f,9.0f,5.4f};
    mysort(arr1,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}