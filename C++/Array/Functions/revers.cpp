//Reverse a array

#include<iostream>
using namespace std;

int* rev(int *ar, int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp = *(ar+i);
        *(ar+i) = *(ar+n-i-1);
        *(ar+n-i-1) = temp;
    }
    
    return ar;
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
    int *a = rev(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
    return 0;
}