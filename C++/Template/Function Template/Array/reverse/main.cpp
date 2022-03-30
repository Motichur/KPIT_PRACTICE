#include<iostream>
using namespace std;

template<typename T>
void myreverse(T *a, int n)
{
    for(int i=0;i<n/2;i++)
    {
        T temp;
        temp = *(a+i);
        *(a + i) = *(a+(n-1-i));
        *(a+(n-1-i)) = temp;
    } 
}

int main()
{
    char arr[5] = "kuna";
    myreverse(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}