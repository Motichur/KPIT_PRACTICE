// check the grade of the student

#include<iostream>
using namespace std;
int main()
{
    int marks=90;
    if(marks>90)
    {
        cout<<"Student got A+ grade";
    }
    else if(marks>80 && marks<=90)
    {
        cout<<"Student got A grade";
    }
    else if(marks>70 && marks<=80)
    {
        cout<<"Student got B+ grade";
    }
    else if(marks>60 && marks<=70)
    {
        cout<<"Student got B grade";
    }
    else if(marks>50 && marks<=40)
    {
        cout<<"Student got C+ grade";
    }
    else if(marks>=40 && marks<=50)
    {
        cout<<"Student got C grade";
    }
    else
    {
        cout<<"Student is Fail";
    }
    return 0;
}