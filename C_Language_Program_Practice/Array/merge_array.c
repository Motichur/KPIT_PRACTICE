#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,n1,n2;
    printf("Enter The length of first array\n");
    scanf("%d",&n);
    printf("\nEnter The length of Second array\n");
    scanf("%d",&n1);
    n2 = n+n1;
    //printf("%d",n2);
    int *ptr,*ptr1,*ptr2;
    ptr = (int*)malloc(n*sizeof(int));
    ptr1 = (int*)malloc(n1*sizeof(int));
    ptr2 = (int*)malloc(n2*sizeof(int));
    printf("Enter The Elements of first array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
        ptr2[i] = ptr[i];
    }
    printf("Enter The Elements of Second array\n");
    int k = n;
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&ptr1[i]);
        ptr2[k] = ptr1[i];
        k++;
    }


    for(int i=0;i<n2;i++)
    {
        printf("%d ",ptr2[i]);
    } 
    return 0;
}