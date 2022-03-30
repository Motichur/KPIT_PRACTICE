#include<stdio.h>

int main()
{
    int arr[11];
    for(int i=1;i<11;i++)
    {
        arr[i] = i*5;
    }
    for (int i = 1; i < 11; i++)
    {
        printf("%d, ",arr[i]);
    }
    
    return 0;
}