//F = GMmr

#include<stdio.h>
float mass(float g,float M,float m,float r);

int main()
{
    float g=9.18,M,m,r;
    scanf("%f %f %f",&M,&m,&r);
    float F = mass(g,M,m,r);
    printf("%f",F);
    return 0;
}

float mass(float g,float M,float m,float r){
    float F;
    F = (g*M*m)/(r*r);    
    return F;
}