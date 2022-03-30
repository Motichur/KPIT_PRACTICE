#include<stdio.h>
 
int main()
{
    int n = 121,sum=0;
    int k=n;
    while(n>0)
    {
        sum = sum*10+ n%10;
        n = n/10;
    }
    if(k==sum)
    {
        printf("Number is Pallendrome");
    }
    else
    {
        printf("Number is Not Pallendrome");
    }
    return 0;
}