#include<iostream>
using namespace std;

class Employee
{
    int id;
    double salary;
    public:
    Employee();
    void accept();
    bool operator>(Employee e);
    void display();
};

Employee::Employee()
{
    id = 1;
    salary = 20000;
}

void Employee:: accept()
{
    cout<<"Enter id and salary of employee"<<endl;
    cin>>id>>salary;
}

bool Employee::operator>(Employee e)
{
    return salary>e.salary;
} 

void Employee:: display()
{
    cout<<id<<"\t"<<salary<<endl;
}

template<typename T>
void sort(T *a, int n)
{
    T temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
//template<typename T>
// void display(T *a,int n)
// {
//     for(T i=0;i<5;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
int main()
{
/*    
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int * b = sort(arr,5);
    display(b,5);
    cout<<"Enter size of array"<<endl;
    cin>>n;
    char *ar=new char[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    char * b1 = sort(ar,5);
    display(b1,5);
*/
    Employee e[3];
    for(int i=0;i<3;i++)
    {
        e[i].accept();
    }
    sort(e,3);
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}