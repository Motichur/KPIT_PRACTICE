#include<iostream>
#include"Vechicle_polcy.h"
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Poilcies"<<endl;
    cin>>n;
    Vehicle *v;
    v = new Vehicle[n];
    for(int i=0;i<n;i++)
    {
        v[i].accept();
    }
    cout<<"----Poollcy Info----"<<endl;
    for(int i=0;i<n;i++)
    {
        v[i].display();
    }
    cout<<endl;
    cout<<"------After Sorting------"<<endl<<"---In Decresing oreder---"<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double a = v[i].getAmount();
            double b = v[j].getAmount();
            if(a<b)
            {
                Vehicle temp;
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    cout<<"----Poollcy Info----"<<endl;
    for(int i=0;i<n;i++)
    {
        v[i].display();
    }
    
    cout<<endl;
    cout<<"Highest Policy Holder Details are : "<<endl;
    v[0].display();
    cout<<endl;
    cout<<"Lowest Policy Holder Details are : "<<endl;
    v[n-1].display();
    return 0;
}