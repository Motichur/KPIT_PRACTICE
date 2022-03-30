#include<stdio.h>
 
int main()
{
    int arr[5]={90,40,100,1,10};
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}