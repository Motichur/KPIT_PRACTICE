#include<stdio.h>

int main()
{
    int n=3,count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Number is not prime");
    }
    else{
        printf("Number is prime");
    }
}