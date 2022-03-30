/*
    Write a program to implement Point class

    x,y coordinates as data members
    Suitable constructors - default, parameterized, copy constructors
    A function to display the point in (x,y) format
    A function to calculate distance from the origin
    Check the quadrant of the point
    Apply const suffix wherever possible
*/
#include<bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
    public:
    Point()
    {
        x=5;
        y=6;
    }

    Point(int x,int y)
    {
        this->x = x;
        this->y = y;
    }

    void disp()
    {
        cout<<"Points are ("<<this->x<<","<<this->y<<")"<<endl;
    }

    void dist()
    {
        int d;
        d = sqrt((this->x * this->x)+(this->y*this->y));
        cout<<"Distance of point from origin is "<<d<<endl;
    }

    void quadrant() const
    {
        if(this->x > 0 && this->y > 0)
        {
            cout<<"Point is in First quadrant"<<endl;
        }
        else if(this->x < 0 && this->y > 0)
        {
            cout<<"Point is in Second quadrant"<<endl;
        }
        else if(this->x < 0 &&this->y < 0)
        {
            cout<<"Point is in Third quadrant"<<endl;
        }
        else
        {
            cout<<"Point is in Fourth quadrant"<<endl;
        }
    }
};

int main()
{
    Point p1;
    p1.disp();
    p1.dist();
    p1.quadrant();

    Point p2(-2,-4);
    p2.disp();
    p2.dist();
    p2.quadrant();
    return 0;
}