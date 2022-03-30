#include<stdio.h>
 
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",m,i,m*i);
    }
    return 0;
}