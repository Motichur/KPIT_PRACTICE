#include<stdio.h>

int main()
{
    int N;
    printf("Enter a Number");
    scanf("%d",&N);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*N);
    }
    return 0;
}