#include<stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%d\n",*ptr);
    printf("%u\n",ptr);
    printf("%u\n",&a);
    return 0;
}