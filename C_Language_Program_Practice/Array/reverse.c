#include<stdio.h>
#include<stdlib.h>

int main()
{
    // int n;
    // scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Array before reverse\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    int temp;
    for(int i=0;i<3/2;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[3-i-1];
        ptr[3-i-1] = temp;
    }
    printf("Array After reverse\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}