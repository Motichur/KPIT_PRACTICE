#include<iostream>
#include<cstring>
#include"CANFrame.h"
using namespace std;

CANFrame::CANFrame(int i, int l, const char *n)
{
    id = i;
    length =l;
    strcpy(data,n);
}

void CANFrame:: accept()
{
    cout<<"Enter CANFrame id and data"<<endl;
    cin>>id>>data;
}

void CANFrame::display()
{
    cout<<id<<"#"<<data<<endl;
}