#include<stdio.h>
struct complex{
    int real;
    int img;
}; 
int main()
{
    struct complex c1,c2;
    c1.real = 5;
    c1.img = 7;
    c2.real = 7;
    c2.img = 5;
    printf("%d + %di",c1.real+c2.real,c1.img+c2.img);
    return 0;
}