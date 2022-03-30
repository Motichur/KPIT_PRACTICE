#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("Enter the length of array");
    int count;
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n+1;j++)
        {
            if(i!= j)
            {
                if(ptr[i] == ptr[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d ",ptr[i]);
        }
    }
    return 0;
}