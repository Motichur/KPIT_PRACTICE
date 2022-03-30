#include<stdio.h>
void vowel(char *ch,int *v, int *c)
{
    *v =0,*c=0;
    while (*ch != '\0')
    {
        if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u')
        {
            *v++;
        }
        else
        {
            *c++;
        }
        ch++;
    }
} 
int main()
{
    char ch[10] = "Kunal";
    char *ca = ch;
    int v,c;
    vowel(ca,&v,&c);
    printf("%d %d",v,c);
    return 0;
}