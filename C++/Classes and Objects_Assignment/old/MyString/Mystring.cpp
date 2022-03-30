#include<iostream>
#include<cstring>
#include"Mystring.h"
using namespace std;

Mystring::Mystring(const char *n)
{
    strcpy(str,n);
}

int Mystring::length()
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

void Mystring::reverse()
{
    int n1 = length();
    for(int i=0;i<n1/2;i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[n1-i-1];
        str[n1-i-1] = temp;
    }
}

void Mystring::display()
{
    cout<<length()<<endl;
    cout<<str;
}