#include<stdio.h>
#include<stdlib.h>

int maxm(int *a,int n)
{
    int max = *a;
    for(int i=1;i<n;i++)
    {
        if(*a>max)
        {
            max = *a;
        }
        a++;
    }
    return max;
}
int main()
{
    int n=5;
    int *arr;
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c = maxm(arr,n);
    printf("%d",c);
    return 0;
}