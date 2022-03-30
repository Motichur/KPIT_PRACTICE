#include<stdio.h>
struct Vector{
    int x;
    int y;
};

struct Vector sum(struct Vector v, struct Vector v0);
int main()
{
    struct Vector v1,total;
    v1.x = 10;
    v1.y = 20;
    
    struct Vector v2;
    v2.x = 30;
    v2.y = 20;

    total = sum(v1,v2);
    printf("%d %d",total.x,total.y); 
    return 0;
}

struct Vector sum(struct Vector v, struct Vector v0)
{
    struct Vector result;
    result.x = v.x+v0.x;
    result.y = v.y + v0.y;
    return result;
}