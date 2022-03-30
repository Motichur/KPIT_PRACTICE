#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    char *c;
    c = (char*)malloc(num*sizeof(char));
    for(int i=0;i<num;i++)
    {
        scanf("%c",&c[i]);
    }

    for(int i=0;i<num;i++)
    {
        printf("%c",c[i]);
    }

    return 0;
}