//Quandrants of points

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter X and Y co-ordinates"<<endl;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Points are in I quadrant"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Points are in II quadrant"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Points are in III quadrant"<<endl;
    }
    else 
    {
        cout<<"Points are in IV quadrant"<<endl;
    }
    return 0;
}