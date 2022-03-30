//Count the elements which are greater than the certain threshold value in Array

#include<iostream>
using namespace std;

int val(int *ar,int n, int a)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(*(ar+i)>a)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int *ar;
    ar = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a;
    cout<<"Enter Threshould value"<<endl;;
    cin>>a;
    int b = val(ar,n,a);
    cout<<"Number of elements above threshould value is : "<<b<<endl;
    return 0;
}