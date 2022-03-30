/*
    Implement Box class as follows

    Dimensions l,b,h as data members
    Suitable constructors - default, parameterized, copy constructors
    A function to display the dimensions
    A function to calculate the volume of the box
    Apply const suffix wherever possible
*/
#include<iostream>
using namespace std;

class Box
{
    int l;
    int b;
    int h;
    public:
    Box()
    {
        l = 4;
        b = 5;
        h = 6;
    }

    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void dimension() const
    {
        cout<<"Length "<<this->l<<endl;
        cout<<"Breadth "<<this->b<<endl;
        cout<<"Height "<<this->h<<endl;
    }

    void volume()
    {
        cout<<"Volume is "<<this->l*this->b*this->h;
    }
};

int main()
{
    Box b1;
    b1.dimension();
    b1.volume();

    Box b2(7,8,9);
    b2.dimension();
    b2.volume();
    return 0;
}