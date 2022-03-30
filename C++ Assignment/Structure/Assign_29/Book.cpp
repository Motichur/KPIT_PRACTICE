#include<iostream>
#include"Book.h"
using namespace std;
void aceept(book *b1)
{
    cout<<"Enter Book id, name and price"<<endl;
    cin>>b1->bookid>>b1->bookname>>b1->price;
}

void display(book *b1)
{
    cout<<b1->bookid<<"\t"<<b1->bookname<<"\t"<<b1->price<<endl;
}