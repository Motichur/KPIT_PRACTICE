#include<stdio.h>
 
int main()
{
    int n = 10;
    int *ptr;
    ptr = &n;
    printf("%x\n",ptr);
    printf("%x\n",&n);
    printf("%d\n",*ptr);
    *ptr = 5;
    printf("%d\n",*ptr);
    return 0;
}