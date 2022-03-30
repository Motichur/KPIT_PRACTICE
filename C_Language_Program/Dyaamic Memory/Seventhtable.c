#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        ptr[i] = 7 * (i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("7 X %d = %d\n",i+1,ptr[i]);
    }
    return 0;
}