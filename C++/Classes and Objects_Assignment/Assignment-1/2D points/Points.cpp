#include<iostream>
#include"Points.h"
using namespace std;

Point::Point(int xx, int yy)
{
    x = xx,
    y = yy;
}

void Point ::showQuadrant()
{
    if(x>0&&y>0)
    {
        cout<<"Points are in I st Quadrant"<<endl;
    }
    else if(x<0&&y>0)
    {
        cout<<"Points are in II nd Quadrant"<<endl;
    }
    else if(x<0&&y<0)
    {
        cout<<"Points are in III rd Quadrant"<<endl;
    }
    else
    {
        cout<<"Points are in IV th Quadrant"<<endl;
    }
}

void Point ::calcDistFromOrigin()
{
    cout<<"Distance from origin of Point is "<<(x*x)+(y*y)<<endl;
}

void Point:: display()
{
    cout<<"Given Points are "<<"("<<x<<","<<y<<")"<<endl;
}