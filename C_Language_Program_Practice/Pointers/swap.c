#include<stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a,
    *a = *b;
    *b = temp;
}
int main()
{
    int a=5,b=10;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}