#include<stdio.h>
 
int main()
{
    int arr[5] = {1,2,3,4,5};
    int even[10],odd[10];
    int j=0,k=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}