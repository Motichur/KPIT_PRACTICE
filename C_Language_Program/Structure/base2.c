#include<stdio.h>
struct Base{
    int x;
    int y;
};

int main()
{
    struct Base b;//*ptr;
    struct Base *ptr;
    ptr = &b;
    ptr->x = 10;
    ptr->y = 20;
    printf("%d %d",b.x,b.y);
    return 0;
}