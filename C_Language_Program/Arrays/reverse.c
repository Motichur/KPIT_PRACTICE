#include<stdio.h>
int reverse(int *a);
int main()
{
    int arr[] = {10,20,30,40,50};
    reverse(&arr);
    return 0;
}

int reverse(int *a)
{
    for(int i=4;i>=0;i--)
    {
        printf("%d, ",*(a+i));
    }

    return 0;
}