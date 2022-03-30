#include<iostream>
#include"Date.h"
using namespace std;

Date :: Date()
{
	dd = 15;
	mm = 02;
	yy = 2000;
}

Date :: Date(int d, int m, int y)
{
	dd = d;
	mm = m;
	yy = y;
}

void Date :: display()
{
	cout<<dd<<"-"<<mm<<"-"<<yy<<"\t";
}