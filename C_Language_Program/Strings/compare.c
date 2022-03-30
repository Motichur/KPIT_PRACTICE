#include<stdio.h>

int main()
{
    char str[20];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&str[i]);
    }
    printf("%s",str);
    return 0;
}