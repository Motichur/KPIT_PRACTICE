#include<stdio.h>
struct complex{
    int real;
    int img;
};
void display(struct complex c)
{
    printf("The Complex Number is %d + %di\n",c.real,c.img);
}
int main()
{
    struct complex c;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&c.real);
        scanf("%d",&c.img);
         display(c);
    }
    // for(int i=0;i<5;i++)
    // {
       
    // }
    return 0;
}