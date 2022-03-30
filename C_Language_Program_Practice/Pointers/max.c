#include<stdio.h>
int max(int *a, int *b)
{
    if(*a>*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
} 
int main()
{
    int a=5,b=6;
    int * ptr=&a, *ptr1=&b;
    int c = max(ptr,ptr1);
    printf("%d",c);
    return 0;
}