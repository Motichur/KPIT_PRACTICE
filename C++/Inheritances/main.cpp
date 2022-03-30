#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    char name[20];
    public:
    Person();
    Person(const char*);
    void display();
};

Person:: Person()
{
    strcpy(name,"ABC");
}

Person::Person(const char *n)
{
    strcpy(name,n);
}

void Person::display()
{
    cout<<name;
}
class Employee:public Person
{
    int id;
    double salary;
    public:
    Employee();
    Employee(int,double,const char *);
    void display();
};

Employee::Employee()
{
    id = 101;
    salary=50000;
}

Employee::Employee(int i, double s, const char *n):Person(n)
{
    id = i;
    salary = s;
}

void Employee::display()
{
    cout<<id<<"\t";
    Person::display();
    cout<<"\t"<<salary<<endl;

}
class Student:public Person
{
    int rollno;
    double per;
    public:
    Student();
    Student(int,double,const char*);
    void display();
};

Student::Student()
{
    rollno=1;
    per = 80;
}

Student :: Student(int r,double p,const char *n):Person(n)
{
    rollno = r;
    per = p;
}

void Student::display()
{
    cout<<rollno<<"\t";
    Person::display();
    cout<<"\t"<<per<<endl;
}
int main()
{
    // Employee e;
    // e.display();
    Student s;
    s.display();
    return 0;
}