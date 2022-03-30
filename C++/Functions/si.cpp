//Calculate SI using 

#include<iostream>
using namespace std;
int SI(int P,int R,int T=1)
{
    int sI;
    sI = (P*R*T)/100;
    return sI;
}
int main()
{
    int P,T,R;
    cout<<"Enter Principal Amount,Rate of Interest & Duration"<<endl;
    cin>>P>>R>>T;
    int a = SI(P,R,T);
    cout<<"Simple Interest is "<<a<<endl;
    return 0;
}