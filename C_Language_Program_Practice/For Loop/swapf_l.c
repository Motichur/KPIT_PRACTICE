#include<stdio.h>
 
int main()
{
    int n =123450,l,f;
    l=n%10;
    while(n>0)
    {
        f = n%10;
        n = n/10;
    }
    int sum;
    sum = l+f;
    printf("%d",sum);
    return 0;
}