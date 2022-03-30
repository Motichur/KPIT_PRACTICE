#include<stdio.h>

int main()
{
    char ch[5] = "kunal";
    int count=0;
    for(int i =0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(ch[i]==ch[j])
            {
                count++;
            }
        }
    }
    printf("Duplicate elements present are: %d",count);
    return 0;
}
