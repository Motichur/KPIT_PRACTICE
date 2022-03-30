#include<iostream>
#include<cstring>
#include"Copy.h"
using namespace std;
int main()
{
    Student s1,s2;
    s1.id=1;
    strcpy(s1.name,"ABC");

    s2 = s1;
    display(s2);
    return 0;
}