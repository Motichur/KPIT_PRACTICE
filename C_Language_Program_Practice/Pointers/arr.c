#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int n=5;
    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        printf("Element at %d is : %d\n",i,ptr[i]);
    }
    
    return 0;
}