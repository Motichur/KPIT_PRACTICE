#include<stdio.h>
struct stud
{
    int rno;
    int std;
    char name[20];
}; 
int main()
{
    struct stud st[10];
    for(int i=0;i<2;i++)
    {
        scanf("%d",&st[i].rno);
        scanf("%s",&st[i].name);
    }
    for(int i=0;i<2;i++)
    {
        printf("%d ",st[i].rno);
        printf("%s",st[i].name);
        printf("\n");
    }
    return 0;
}