#include<stdio.h>
struct vector
{
    int x;
    int y;
};


int main()
{
    struct vector v1;
    v1.x = 10;
    v1.y = 20;
    printf("%d %d\n",v1.x,v1.y);

    struct vector v2;
    v2.x = 30;
    v2.y = 40;
    printf("%d %d",v2.x,v2.y);
    return 0;
}