#include<stdio.h>
 
int main()
{
    int arr[5]={90,40,100,1,10};
    int temp=0;
    for(int i=0;i<5;i++)
    {
         for(int j=i+1; j<5; j++)
        {
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}