/*
    Write a program to implement Employee class

    employee id, name, salary as data members
    Suitable constructors - default, parameterized, copy constructors
    A function to display the employee details
*/
#include<iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    double salary;
    public:
    Employee()
    {
        id = 1;
        name ="Kunal";
        salary =360000;
    }

    Employee(int i, string s,double d)
    {
        id = i;
        name = s;
        salary = d;
    }

    void disp()
    {
        cout<<"--------Employee info--------"<<endl;
        cout<<"ID is "<<id<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Salary is "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    e1.disp();

    Employee e2(2,"ABC",400000);
    e2.disp();

    Employee e3(3,"XYZ",500000);
    e3.disp();
    return 0;
}