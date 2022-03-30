#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},
                    {4,5,6,},
                    {7,8,9}};
    int sum;
    for(int j=0;j<3;j++)
    {
        sum =0;
        for (int i=0;i<3;i++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"sum of "<<j<<"th row is "<<sum<<"\n";
    }
    return 0;
}