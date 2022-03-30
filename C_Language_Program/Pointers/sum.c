#include<stdio.h>
void av(int a,int b,int * sum,int *avg);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum,avg;
    av(a,b,&sum,&avg);
    printf("%d\n",sum);
    printf("%d",avg);
    return 0;
}

void av(int a,int b,int * sum,int *avg)
{
    *sum = a+b;
    *avg = (a+b)/2;
}