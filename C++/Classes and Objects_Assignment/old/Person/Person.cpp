#include<iostream>
#include"Person.h"
#include<cstring>
using namespace std;

Person:: Person()
{
    id =1;
    strcpy(name,"ABC");
    age = 25;
    strcpy(gender,"Male");
}

Person::Person(int i,const char*n,int a,const char *g)
{
    id = i;
    strcpy(name,n);
    age = a;
    strcpy(gender,g);
}

int Person::getId()
{
    return id;
}

int Person::getAge()
{
    return age;
}

char * Person ::getName()
{
    return name;
}

char * Person ::getGender()
{
    return gender;
}

void Person::setId(int i)
{
    id = i;
}

void Person::setAge(int a)
{
    age = a;
}

void Person::setName(const char *n)
{
    strcpy(name,n);
}

void Person::setGender(const char *g)
{
    strcpy(gender,g);
}

void Person:: display()
{
    cout<<"Id "<<id<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"Age "<<age<<endl;
    cout<<"Gender "<<gender<<endl;
}