#include<stdio.h>
int aro(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            sum = arr[i] + arr[j];
            if(sum == n)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 6;
    aro(arr,n);
    return 0;
}