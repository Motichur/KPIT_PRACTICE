#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void area()=0;
    virtual void perimeter()=0;
};

// class Polygon :public Shape
// {

// };

class Circle:public Shape
{
    double radius;
    public:
    Circle();
    void area();
    void perimeter();
};

Circle :: Circle()
{
    radius = 10;
}

void Circle::area()
{
    double area;
    area = 3.14*radius*radius;
    cout<<area<<endl;
}

void Circle :: perimeter()
{
    double peri;
    peri = 2*3.14*radius;
    cout<<peri<<endl;
}

int main()
{
    Circle c;
    c.area();
    c.perimeter();
    return 0;
}