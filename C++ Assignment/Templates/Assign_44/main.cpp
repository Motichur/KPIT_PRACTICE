#include<iostream>
#include"Sort.h"
using namespace std;

int main()
{
    int arr[5]={5,4,3,2,1};
    int* b = sort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}