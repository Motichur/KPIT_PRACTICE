//Given year is leap or not

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year"<<endl;
    cin>>year;
    if(year%4 == 0)
    {
        cout<<year<<" is a Leap year"<<endl;
    }
    else
    {
        cout<<year<<" is Not a Leap year"<<endl;
    }
    return 0;
}