#include<stdio.h>
int pos(int a[]);
int main()
{
    int arr[] = {-10,-20,-30,10,20,30};
    int c = pos(arr);
    printf("%d",c);
    return 0;
}

int pos(int a[])
{
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            count++;
        }
    }
    return count;
}