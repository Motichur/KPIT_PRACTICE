#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;

Point::Point(int xx, int yy)
{
    x = xx;
    y = yy;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

int Point::calcDistanceFromOrigin()
{
    int dist;
    dist = sqrt((x*x)+(y*y));
    //cout<<"Distance from Origin is "<<dist<<endl;
    return dist;
}

void Point::calcLocation()
{
    if(x>0 && y>0)
    {
        cout<<"Point is in I st Quadrant"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Point is in II nd Quadrant"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Point is in III rd Quadrant"<<endl;
    }
    else if(x>0 &&y<0)
    {
        cout<<"Point is in IV th Quadrant"<<endl;
    }
    else if(x==0 && y>0)
    {
        cout<<"Point is on Poisitive Y-axis"<<endl;
    }
    else if(x==0 && y<0)
    {
        cout<<"Point is on Negative Y-axis"<<endl;
    }
    else if(x>0 && y==0)
    {
        cout<<"Point is on Poisitive X-axis"<<endl;
    }
    else if(x<0 && y==0)
    {
        cout<<"Point is on Negative X-axis"<<endl;
    }
    else
    {
        cout<<"Point is at Origin"<<endl;
    }
}

void calcDistanceBetweenPoints(Point p1, Point p2)
{
    int distpoint;
    distpoint = sqrt((p2.getX()-p1.getX())+(p2.getY()-p2.getY()));
    cout<<"Distance Between Two Points is "<<distpoint<<endl;
}

bool Point::operator==(Point &p)
{
    if(x==p.x && y==p.y)
    {
        return true;
    }
    return false;
}

ostream operator<<(ostream &cout, Point &p)
{
    cout<<"Entered point is "<<"("<<p.x<<","<<p.y<<")"<<endl;
}

void Point::accept()
{
    cout<<"Enter X-coordinate & Y-coordinate of Point"<<endl;
    cin>>x>>y;
}

void Point::display()
{
    cout<<"Point is "<<"("<<x<<","<<y<<")"<<endl;
}