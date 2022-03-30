#include<iostream>
#include<fstream>
#include<vector>
#include<cstring>
#include<functional>
#include<algorithm>
#include"Account.h"
using namespace std;
bool comp(Account &b1, Account &b2)
{
    return b1.getName() < b2.getName();
}
int main()
{
    Account a("abc",123456),a1("xyz",852147);
    // for(int i=0;i<3;i++)
    // {
    //     a[i].accept();
    // }
    
    vector<Account> v1;
    // for(int i=0;i<3;i++)
    // {
    //     v1.push_back(a[i]);
    // }
    v1.push_back(a);
    v1.push_back(a1);
    auto itr=v1.begin();
    // for(;itr!=v1.end();itr++)
    // {
    //     (*itr).display();
    // }

    //Display account display by id
    // int i;
    // cout<<"Enter id "<<endl;
    // cin>>i;
    // for(;itr!=v1.end();itr++)
    // {
    //     if(id==i)
    //     {
    //         (*itr).display();
    //     }
    //     id++;
    // }

    //DIsplay account details by name
    // char na[20];
    // cout<<"Enter name "<<endl;
    // cin>>na;
    // for(;itr!=v1.end();itr++)
    // {
    //     const char * a = (*itr).getName();
    //     if(!strcmp(na,a))
    //     {
    //         (*itr).display();
    //     }
    //     id++;
    // }

    // fstream fout;
    // fout.open("reportcard.csv", ios::out | ios::app);
    // for(;itr!=v1.end();itr++)
    // {
    //     fout<<(*itr)<<"\n";
    // }

    //Update details by name
    // char na[20];
    // cout<<"Enter name "<<endl;
    // cin>>na;
    // for(;itr!=v1.end();itr++)
    // {
    //     const char * a = (*itr).getName();
    //     if(!strcmp(na,a))
    //     {
    //         int ba;
    //         cout<<"Enteer new balance"<<endl;
    //         cin>>ba;
    //         (*itr).setBalance(ba);
    //     }
    //     id++;
    // }

    //sort 
    sort(v1.begin(),v1.end(),comp);
    for(;itr!=v1.end();itr++)
    {
        (*itr).display();
    }
    return 0;
}