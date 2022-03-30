#include<stdio.h>
 
int main()
{
    int i=10;
    int *ptr;
    ptr = &i;
    printf("%x\n",ptr);
    printf("%x\n",&i);
    printf("%d\n",*ptr);
    return 0;
}