// Roots of quadratic euation

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,root1,root2,real,img,disc;
    cout<<"Enter coefficents a,b,c"<<endl;
    cin>>a>>b>>c;
    disc = (b*b) - (4*a*c);
    if(disc>0)
    {
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        cout<<root1<<" "<<root2<<endl;
    }
    else if(disc <0)
    {
        real = -b / (2*a);
        img = sqrt(-disc)/(2*a);
        cout<<"root1 = "<<real<<"+"<<img<<"i"<<" "<<"root2 = "<<real<<"-"<<img<<"i"<<endl;
    }
    else
    {
        root1 = root2 = -b/(2*a);
        cout<<root1<<" "<<root2<<endl;
    }
    return 0;
}