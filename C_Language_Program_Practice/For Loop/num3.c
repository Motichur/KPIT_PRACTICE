#include<stdio.h>
 
int main()
{
    int n =4;
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<i+1;j++)
        {   
            
            //k = k + j +1;
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}