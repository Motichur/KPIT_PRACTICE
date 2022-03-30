#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str = "Kunal";
    int count=0;
    for(int i=0;str[i] != '\0';i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}