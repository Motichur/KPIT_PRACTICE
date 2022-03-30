#include<stdio.h>
 int add(int *a,int *b)
 {
     return *a+*b;
 }
int main()
{
    int a=5,b=6;
    int *ptr = &a,*ptr1=&b;
    int c  = add(ptr,ptr1);
    printf("%d",c);
    return 0;
}