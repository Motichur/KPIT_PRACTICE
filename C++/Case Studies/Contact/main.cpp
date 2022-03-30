#include<iostream>
#include<cstring>
#include<vector>
#include"AddressBook.h"
using namespace std;
int main()
{
    // Contact c;
    // c.display();
    // Contact c[2];
    // for(int i=0;i<2;i++)
    // {
    //     c[i].accept();
    // }
    // char p[20];
    // cout<<"ENter primary number"<<endl;
    // cin>>p;
    // for(int i=0;i<2;i++)
    // {
    //     char *n = c[i].getPrimaryNumber();
    //     cout<<n;
    //     if(!strcmp(n,p))
    //     {
    //         c[i].updateDetails();
    //         c[i].display();
    //     }
    // }

    AddressBook a[3];
    for(int i=0;i<3;i++)
    {
        a[i].accept();
    }

    vector<AddressBook> v1;
    for(int i=0;i<3;i++)
    {
        v1.push_back(a[i]);
    }

    auto itr=v1.begin();

    //update details by primary number
    // char p[20];
    // cout<<"ENter primary number"<<endl;
    // cin>>p;
    // for(;itr!=v1.end();itr++)
    // {
    //     char *n = (*itr).getPrimaryNumber();
    //     if(!strcmp(n,p))
    //     {
    //         (*itr).updateDetails();
    //         (*itr).display();
    //     }
    // }

    //delete details by primary number
    char p[20];
    cout<<"ENter primary number"<<endl;
    cin>>p;
    for(;itr!=v1.end();itr++)
    {
        char *n = (*itr).getPrimaryNumber();
        if(!strcmp(n,p))
        {
            v1.pop_back();
        }
    }

    for(;itr!=v1.end();itr++)
    {
        (*itr).display();
    }
    return 0;
}