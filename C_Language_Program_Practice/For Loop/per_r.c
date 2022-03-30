#include<stdio.h>
 
int main()
{
    int i,s=1,e=50,sum,j;
    for(i=s;i<=e;i++)
    {
        j=1;
        sum=0;
        while(j<i)
        {
            if(i%j==0)
            {
                sum = sum+j;
            }
            j++;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    printf("\ndone");
    return 0;
}