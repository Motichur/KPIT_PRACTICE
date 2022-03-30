#include<stdio.h>
 
int main()
{
    int n1=24,n2=28,hcf;
    for(int i=2;i<=n2;i++)
    {
        if((n1%i==0) && (n2%i==0))
        {
            hcf = i;
        }
    }
    printf("%d",hcf);
    return 0;
}