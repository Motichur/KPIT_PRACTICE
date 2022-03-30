#include"Polygon.h"

class Rectangle:public Polygon
{
    int l,b;
    public:
    Rectangle(int=1,int=1);
    double area();
    double perimeter();
    void display();
};