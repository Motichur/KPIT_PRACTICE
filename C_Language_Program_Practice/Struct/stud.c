#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[20];
    int std;
};
int main()
{
    struct Student st;
    st.id = 101;
    st.std = 5;
    strcpy(st.name,"ABC");
    printf("%s %d %d",st.name,st.id,st.std);
    return 0;
}