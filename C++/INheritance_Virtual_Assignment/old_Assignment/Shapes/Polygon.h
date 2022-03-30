#include"Shape.h"

class Polygon:public Shape
{
    public:
    virtual double area()=0;
    virtual double perimeter()=0;
    virtual void display()=0;
};