#include<stdio.h>
int facto(int n,int *a)
{
    *a = 1;
    for(int i=1;i<=n;i++)
    {
        *a = *a * i;
    }
    return *a;
}
int main()
{
    int n =5,f;
    int *ptr = &n;
    facto(n,&f);
    printf("%d",f);
    return 0;
}