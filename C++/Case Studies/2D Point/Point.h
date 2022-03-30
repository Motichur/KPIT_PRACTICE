#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
    public:
    Point(int =0, int =0);
    void accept();
    void display();
    int getX();
    int getY();
    int calcDistanceFromOrigin();
    void calcLocation();
    bool operator==(Point &);
    friend ostream operator<<(ostream &, Point &);
};

void calcDistanceBetweenPoints(Point, Point);