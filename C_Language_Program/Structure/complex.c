#include<stdio.h>
struct Complex{
    int real;
    int img;
};
void Comp(struct Complex c);

int main()
{
    struct Complex c;
    c.real = 5;
    c.img = 7;

    Comp(c);
    return 0;
}

void Comp(struct Complex c)
{
    printf("Complex number is %d + %di",c.real,c.img);
}