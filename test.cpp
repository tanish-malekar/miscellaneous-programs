#include<iostream>
using namespace std;



class A
{
public:
    int a;
    A(int x)
    {
        a = x;
    }
};

class B: public A
{
public:
    int a;
    B(int x, int y):A(x)
    {
        a = y;
    }
};


int main()
{
    B b(10, 20);
    cout<<b.a;
}
