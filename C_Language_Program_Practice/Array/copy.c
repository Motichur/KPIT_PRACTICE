#include<stdio.h>

int main()
{
    int arr[3]={1,2,3};
    int arr2[3];
    for(int i=0;i<3;i++)
    {
        arr2[i] = arr[i];
    }
    printf("Second array is:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}