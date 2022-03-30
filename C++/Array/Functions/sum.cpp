//Sum and Average of array elements

#include<iostream>
using namespace std;
int sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(arr+i);
    }
    return sum;
}
float avg(int sum,int n)
{
    return sum/n;
}
int main()
{
    int n;
    cout<<"Enter the length of array\n";
    cin>>n;
    int *ar;
    ar = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int  a = sum(ar,n);
    cout<<"Sum of array element is : "<<a<<endl;
    float b = avg(a,n);
    cout<<"Average of array element is : "<<b;
    return 0;
}