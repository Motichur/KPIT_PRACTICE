#include<stdio.h>
 
int main()
{
    int n = 10;
    int sum = 0;
    float avg;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum = sum +i;
    }
    printf("\n %d \n",sum);
    avg = sum/n;
    printf("%f",avg);
    return 0;
}