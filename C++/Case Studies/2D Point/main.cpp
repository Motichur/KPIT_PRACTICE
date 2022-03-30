#include<iostream>
#include<vector>
#include<algorithm>
#include"Point.h"
using namespace std;
int main()
{
    Point p1(5,7),p2(-4,-3),p3(-2,5),p4(-2,5);
    // p1.calcDistanceFromOrigin();
    // p2.calcLocation();
    // calcDistanceBetweenPoints(p2,p1);
    // p3.display();
    // cout<<(p3==p4)<<endl;

    vector<Point> v1;
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);

    vector<Point>::iterator itr;
    // for_each(v1.begin(), v1.end(),[](Point p)
    // { p.display();});

    //Average of all points from origin
    // int sum=0;
    // for(itr = v1.begin();itr!=v1.end();itr++)
    // {
    //     int a = (*itr).calcDistanceFromOrigin();
    //     sum = sum + a;
    // }
    // int avg;
    // avg = sum/v1.size();
    // cout<<"Average is "<<avg<<endl;

    //farthest and nearest point from origin
    // int n,f;
    // n = (*itr).calcDistanceFromOrigin();
    // f = (*itr).calcDistanceFromOrigin();
    // for(itr = v1.begin();itr!=v1.end();itr++)
    // {
    //     int a = (*itr).calcDistanceFromOrigin();
    //     if(a>f)
    //     {
    //         f = a;
    //     }
    //     if(n>a)
    //     {
    //         n = a;
    //     }
    // }

    // for(itr = v1.begin();itr!=v1.end();itr++)
    // {
    //     int a = (*itr).calcDistanceFromOrigin();
    //     if(n==a)
    //     {
    //         (*itr).display();
    //     }
    //     if(f==a)
    //     {
    //         (*itr).display();
    //     }
    // }
    
    // Points lie on boundary of circle
    // int radius;
    // cout<<"Enter Radius of Circle "<<endl;
    // cin>>radius;
    // cout<<"Points Lie on Circle are "<<endl;
    // for(itr = v1.begin();itr!=v1.end();itr++)
    // {
    //     int a = (*itr).calcDistanceFromOrigin();
    //     if(radius==a)
    //     {
    //         cout<<*itr;
    //     }
    // }
    return 0;
}