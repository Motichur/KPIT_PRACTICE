#include<iostream>
using namespace std;

void add(int (*a)[3], int (*b)[3])
{
    int a3[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a3[i][j] = *( *(a + i) + j) + *( *(b + i) + j);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[3][3] = {{1,2,3},
                  {4,5,6},
                  {7,8,9}};
    int b[3][3] = {{9,8,7},
                  {6,5,4},
                  {3,2,1}};
    // int (*a1)[3];
    // a1 = a;
    add(a,b);
    return 0;
}