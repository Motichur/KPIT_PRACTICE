#include<stdio.h>
 
int main()
{
    int n=5;
    float sum=0;
    for (int i = 1; i < n; i++)
    {
        sum = sum + (1/(float)i);
    }
    printf("%f",sum);
    return 0;
}