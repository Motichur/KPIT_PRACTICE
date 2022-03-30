#include<stdio.h>
int add(int* a);

int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%d\n",&a);
    add(ptr);
    return 0;
}

int add(int* a)
{
    printf("%u",a);
}