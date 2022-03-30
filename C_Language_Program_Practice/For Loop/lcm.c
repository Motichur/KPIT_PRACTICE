#include<stdio.h>
 
int main()
{
    int n1=15,n2=20,lcm=1;
    int k;
    k = n1>n2?n1:n2;
    for(int i=k;;i+=k)
    {
        if((i%n1==0)&&(i%n2==0))
        {
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}