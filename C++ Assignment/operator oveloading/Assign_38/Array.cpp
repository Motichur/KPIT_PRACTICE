#include<iostream>
#include"Array.h"
using namespace std;

Matrix :: Matrix()
{
    row = 3;
    col =3;
}

Matrix :: Matrix(int r, int c)
{
    row =r;
    col = c;
    arr[row][col];
}

void Matrix :: accept()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
}

Matrix Matrix :: operator+(Matrix &m)
{
    Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.arr[i][j] = arr[i][j] + m.arr[i][j];
        }
    }
    return temp;
}
Matrix Matrix :: operator!()
{
    Matrix temp;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.arr[j][i] = arr[i][j];
        }
    }
    return temp;
}

void Matrix:: display()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
