//Reverse A digit 

#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        int k;
        k = n%10;
        reverse = reverse*10 + k;
        n = n/10;
    }
    cout<<"Reversed Number is "<<reverse<<endl;
    return 0;
}