#include<iostream>
#include"complex.h"
using namespace std;
int main()
{
    Complex c1;
    c1.display();
    cout<<"Real part is "<<c1.getReal()<<endl;
    cout<<"Imaignary part is "<<c1.getImg()<<endl;
    c1.setreal(6);
    c1.setImg(10);
    c1.display();
    cout<<"Real part is "<<c1.getReal()<<endl;
    cout<<"Imaignary part is "<<c1.getImg()<<endl;

    Complex c2(10,15);
    c2.display();
    cout<<"Real part is "<<c2.getReal()<<endl;
    cout<<"Imaignary part is "<<c2.getImg()<<endl;
    return 0;
}