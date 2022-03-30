#include<stdio.h>
 
int main()
{
    int s=1,e=50,j;
    for(int i=s;i<=e;i++)
    {
        int count=0;
        for(j = 2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}