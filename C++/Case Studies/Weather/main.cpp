#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include"Weather.h"
using namespace std;
int main()
{
    Weather w1(1,"PUNE",40,60,20),
            w2(2,"MUMBAI",35,70,50),
            w3(3,"NASHIK",40,50,90);
    //w.display();
    vector<Weather> v1;
    v1.push_back(w1);
    v1.push_back(w2);
    v1.push_back(w3);

    auto itr=v1.begin();
    // for(;itr!=v1.end();itr++)
    // {
    //     (*itr).display();
    // }

    //Finding City By ID
    // int id;
    // cout<<"Enter City ID"<<endl;
    // cin>>id;
    // for(;itr!=v1.end();itr++)
    // {
    //     int a;
    //     a = (*itr).getID();
    //     if(id==a)
    //     {
    //         (*itr).display();
    //     }
    // }

    //Finding City By Name
    // char n[20];
    // cout<<"Enter City Name"<<endl;
    // cin>>n;
    // for(;itr!=v1.end();itr++)
    // {
    //     const char * a;
    //     a = (*itr).getName();
    //     if(!strcmp(n,a))
    //     {
    //         (*itr).display();
    //     }
    // }

    //Minimum Element
    // Weather a = *min_element(v1.begin(),v1.end(),[](Weather &w, Weather &w1)
    //                     {return w.getTemprature()<w1.getTemprature();});
    // a.display();

    //Maximum Element
    // Weather b = *max_element(v1.begin(),v1.end(),[](Weather &w, Weather &w1)
    //                     {return w.getTemprature()<w1.getTemprature();});
    // b.display();

    double avgTemp,avgHum,avgPre;
    for(;itr!=v1.end();itr++)
    {
        double sumt=0,sumh=0,sump=0;
        sumt = sumt + (*itr).getTemprature();
        avgTemp = sumt/3;
        sumh = sumh + (*itr).getHumidity();
        avgHum = sumh/3;
        sump = sump + (*itr).getPressure();  
        avgPre = sump/3; 
    }
    
    cout<<"Avaerage of temprature is "<<avgTemp<<endl;
    cout<<"Avaerage of Humidity is "<<avgHum<<endl;
    cout<<"Avaerage of Pressure is "<<avgPre<<endl;
    return 0;
}