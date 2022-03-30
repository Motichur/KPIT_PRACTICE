#include<stdio.h>
struct Distance
{
    int feet;
    int inches;
};
int main()
{
    struct Distance dt1,dt2;
    dt1.feet = 11;
    dt1.inches = 11;
    dt2.feet = 20;
    dt2.inches = 20;
    printf("%d %d",dt1.feet+dt2.feet,dt1.inches+dt2.inches);
    return 0;
}