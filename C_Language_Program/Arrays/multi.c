#include<stdio.h>

int main()
{
    int a[3][10];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d, ",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("The table of %d",i);
        for(int j=0;j<10;j++)
        {
            
            printf("%d, ",a[i][j]);
        }
    }
    return 0;
}