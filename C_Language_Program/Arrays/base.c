#include<stdio.h>

int main()
{
    int a[]={10,20,30,40};
    int *ptr = &a[0];
    for(int i=0;i<4;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}