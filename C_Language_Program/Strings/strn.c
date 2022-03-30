#include<stdio.h>
int strlen(const char* str);

int main()
{
    char str[]="Kunal";
    int c = strlen(str);
    printf("Length of string is :%d",c);
    return 0;
}

int strlen(const char* str)
{
    char *ptr = str ;
    int count =0;
    while(*ptr !='\0')
    {
        count++;
        ptr++;
    }
    return count;
}
