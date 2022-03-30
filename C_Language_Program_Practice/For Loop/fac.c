#include<stdio.h>
 
int main()
{
    int n=5,fc=1;
    for(int i=1;i<=n;i++)
    {
        fc = fc * i;
    }
    printf("%d",fc);
    return 0;
}