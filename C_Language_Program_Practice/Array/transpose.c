#include<stdio.h>
 
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int arr1[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("-----------Transpose Matrix-----------\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}