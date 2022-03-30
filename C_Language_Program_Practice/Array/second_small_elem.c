#include<stdio.h>
 
int main()
{
    int arr[5] = {2,7,1,14,8};
    int temp=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[1]);
    return 0;
}