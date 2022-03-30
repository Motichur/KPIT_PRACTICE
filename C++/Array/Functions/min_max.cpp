//Max & min elements of array

#include<iostream>
using namespace std;
int max(int *ar,int n)
{
    int m = *(ar+0);
    for(int i=0;i<n;i++)
    {
        if(m<*(ar+i))
        {
            m = *(ar+i);
        }
    }
    return m;
}

int min(int *ar,int n)
{
    int l = *(ar+0);
    for(int i=0;i<n;i++)
    {
        if(l>*(ar+i))
        {
            l = *(ar+i);
        }
    }
    
    return l;
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
    int a = max(ar,n);
    int b = min(ar,n);
    cout<<"Maximum & Minimum Elements from array are : "<<a<<" "<<b<<endl;
    return 0;
}