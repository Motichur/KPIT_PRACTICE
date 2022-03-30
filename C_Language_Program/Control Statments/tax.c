#include<stdio.h>

int main()
{
    float income;
    scanf("%f",&income);
    if(income>2.5 && income<5.0)
    {
        printf("Tax payed is 5%");
    }
    else if(income>5.0 && income<10.0)
    {
        printf("Tac pay is 10%");
    }
    else if(income>20.0)
    {
        printf("Tac pay is 20%");
    }
    else
    {
        printf("Didt need to pay tax");
    }
    return 0;
}