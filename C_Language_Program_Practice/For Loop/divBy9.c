#include<stdio.h>
 
int main()
{
    int s=100,e=200;
    for(int i=s;i<=e;i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}