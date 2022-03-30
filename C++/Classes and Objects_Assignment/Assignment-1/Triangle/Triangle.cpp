#include<iostream>
#include"Triangle.h"
using namespace std;

Triangle::Triangle(int l, int b, int h)
{
    s1=l;
    s2=b;
    s3=h;
}

double Triangle::area()
{
    return s1*s2*s3;
}

double Triangle::circumference()
{
    return s1+s2+s3;
}

void Triangle::typeTriangle()
{
    if(s1==s2&&s2==s3&&s1==s3)
    {
        cout<<"Equilatoral Triangle"<<endl;
    }
    else if(s1==s2||s2==s3||s1==s3)
    {
        cout<<"Ioscalles triangle"<<endl;
    }
    else{
        cout<<"Scalar Triangle"<<endl;
    }
}

void Triangle::display()
{
    cout<<"Area of Triangle is "<<area()<<endl;
    cout<<"Perimeter of Triangle is "<<circumference()<<endl;
}