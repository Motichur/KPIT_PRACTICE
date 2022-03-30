#include<iostream>
#include<cstring>
#include"Employee.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of employee"<<endl;
    cin>>n;
    Employee *e = new Employee[n];
    for(int i=0;i<n;i++)
    {
        e[i].accept();
    }
    cout<<"----Employee info----"<<endl;
    for(int i=0;i<n;i++)
    {
        e[i].display();
    }

    int ch,cho;
    cout<<"ENter id of employye which you want to update"<<endl;
    cin>>ch;
    cout<<"Selct from below chocies what you want to update"<<endl;
    cout<<"1->ID"<<endl<<"2->Employee Name"<<endl<<"3->Salary"<<endl;
    cin>>cho;
    switch(cho)
    {
        case 1: int a;
                cout<<"Enter id"<<endl;
                cin>>a;
                e[ch].setID(a);
                break;
        case 2: char name[20];
                cout<<"Enter name"<<endl;
                cin>>name;
                e[ch].setName(name);
                break;
        case 3: double s;
                cout<<"Enter salary"<<endl;
                cin>>s;
                e[ch].setSalary(s);
                break;
        default:cout<<"Wrong choice.......!"<<endl;
                break;
    }

    cout<<endl;
    cout<<"----After Updation----"<<endl;
    for(int i=0;i<n;i++)
    {
        e[i].display();
    }
    // Employee e1;
    // e1.display();

    // Employee e2(2,"XYZ",50000);
    // e2.display();
    return 0;
}