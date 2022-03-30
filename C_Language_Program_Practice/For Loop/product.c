#include<stdio.h>
 
int main()
{
    int n = 1230,pro=1;
    while(n>0)
    {
        int e = n%10;
        pro = pro * e;
        n = n/10;
    }
    printf("%d",pro);
    return 0;
}