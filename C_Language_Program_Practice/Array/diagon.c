#include<stdio.h>
 
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int d_sum =0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i==j)
            {
                d_sum = arr[i][j] + d_sum;
            }
        }
    }
    printf("%d",d_sum);
    return 0;
}