#include<stdio.h>

int main()
{
    int N,i=1,sum=0;
    printf("Enter a Number");
    scanf("%d",&N);
    do
    {
        sum = sum + (i*N);
    } while (i<11);

    printf("%d",sum);  
    
    return 0;
}   