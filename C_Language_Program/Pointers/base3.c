#include<stdio.h>
int* mul(int* a);

int main()
{
    int a = 10;
    int c = mul(&a);
    printf("%d",c);
    return 0;
}

int* mul(int* a)
{
    int *ptr = a;
    a = 10* (*ptr);
    return a;
}