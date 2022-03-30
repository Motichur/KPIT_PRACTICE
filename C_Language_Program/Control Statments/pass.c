#include <stdio.h>

int main()
{
    int m1, m2, m3;
    scanf("%d %d %d",&m1,&m2,&m3);
    int sum = (m1 + m2 + m3) / 3;
    if (m1 > 33)
    {
        if (m2 > 33)
        {
            if (m3 > 33)
            {
                if (sum > 40)
                {
                    printf("Student is pass");
                }
                else
                {
                    printf("Student is Fail");
                }
            }
            else
            {
                printf("Student is Fail");
            }
        }
        else
        {
            printf("Student is Fail");
        }
    }
    else
    {
        printf("Student is Fail");
    }
    return 0;
}