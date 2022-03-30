// Biggewst Number from 3 numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENter three Numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Maximum Number is : "<<a<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<"Maximum Number is : "<<b<<endl;
    }
    else
    {
        cout<<"Maximum Number is : "<<c<<endl;
    }
    return 0;
}