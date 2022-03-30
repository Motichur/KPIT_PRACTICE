#include<iostream>
#include"Box.h"
using namespace std;

Box::Box(int l,int b, int h)
{
    length = l;
    breadth = b;
    height = h;
}

void Box::calcVolume()
{
    int vol;
    vol = length*breadth*height;
    cout<<"Volume is "<<vol<<endl;
}

void Box::calcarea()
{
    int vol;
    vol = 0.5*length*height;
    cout<<"Volume is "<<vol<<endl;
}