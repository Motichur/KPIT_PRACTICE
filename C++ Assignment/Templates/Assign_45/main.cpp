#include <iostream>
using namespace std;

template <class T>
class stack
{
    T arr[100];
    int size;
    int top;

public:
    stack();
    void push(T);
    T pop();
};
template<typename T>
stack<T>::stack()
{
    size = 5;
    top = -1;
}

template<typename T>
void stack<T>::push(T a)
{
    arr[top++]=a;
}

template<typename T>
T stack<T>::pop()
{
    return arr[top--];
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}