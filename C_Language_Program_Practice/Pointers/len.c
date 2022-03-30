#include<stdio.h>
int leng(char *ch)
{
    int count =0;
    while(*ch !='\0')
    {
        count++;
        ch++;
    }
    return count;
} 
int main()
{
    char ch[10] = "Kunal";
    //char *pt = &ch;
    int c = leng(&ch);
    printf("%d",c);
    return 0;
}