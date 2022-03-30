#include<stdio.h>
#include<string.h>
typedef struct Employee
{
    int id;
    char name[20];
    float salary;
}emp;
void display(emp e);

int main()
{
    emp e;
    e.id=101;
    strcpy(e.name,"Kunal");
    e.salary=3000000;
    display(e);
    return 0;
}

void display(emp e)
{
    printf("Id is     : %d\n",e.id);
    printf("Name is   : %s\n",e.name);
    printf("Salary is : %f\n",e.salary);
}