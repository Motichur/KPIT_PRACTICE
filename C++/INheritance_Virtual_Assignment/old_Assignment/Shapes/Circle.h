#include"Shape.h"

class Circle:public Shape
{
    int radius;
    public:
    Circle(int=1);
    double area();
    double perimeter();
    void display();
};