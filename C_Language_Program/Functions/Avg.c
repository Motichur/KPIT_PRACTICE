#include<stdio.h>
void avg();

int main()
{
    avg();
    return 0;
}

void avg()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    
    int avg;
    avg = (n1+n2+n3)/3;
    printf("%d ",avg);
}