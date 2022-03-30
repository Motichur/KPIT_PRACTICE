#include<iostream>
#include"Book.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Numbers of books"<<endl;
    cin>>n;

    book *b = new book[n];
    for(int i =0;i<n;i++)
    {
        aceept(&b[i]);
    }
    cout<<"-----Book info-----"<<endl;
    for(int i =0;i<n;i++)
    {
        display(&b[i]);
    }
    return 0;
}