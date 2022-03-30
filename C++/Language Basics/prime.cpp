//list prime numbers in the given range.

#include<iostream>
using namespace std;
int main()
{
    int s,e,count;
    cout<<"ENter the start and end number of range"<<endl;
    cin>>s>>e;
    for(int i=s;i<e;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}