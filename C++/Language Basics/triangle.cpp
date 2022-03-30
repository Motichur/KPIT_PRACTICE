//check the type of the triangle (Equilateral, Isosceles, Scalan, Right-angled, Formation of the triangle with given sides)

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c && a==c)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b || b==c || a==c)
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else
    {
        cout<<"Scalan Triangle"<<endl;
    }
    return 0;
}