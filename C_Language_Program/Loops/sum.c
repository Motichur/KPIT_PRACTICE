#include<stdio.h>

int main()
{
    int N,sum=0;
    scanf("%d",&N);
    while(N>0)
    {
        sum = sum +N;
        N--;
    }
    printf("%d",sum);
    return 0;
}