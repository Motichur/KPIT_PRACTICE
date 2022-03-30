#include<stdio.h>

int main()
{
    float P,N,T,SI;
    scanf("%f %f %f",&P,&N,&T);

    SI = (P*N*T)/100;
    printf("%f",SI);
    return 0;
}