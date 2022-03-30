#include<stdio.h>
 
int main()
{
    for(char i='a',j='A';i<='z',j<='Z';i++,j++)
    {
        printf("%c %c\n",i,j);
    }
    return 0;
}