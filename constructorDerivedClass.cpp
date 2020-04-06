#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(int x)
    {
        a = x;
    }
    void dispA()
    {
        cout<<a<<endl;
    }
};

class B
{
    int b;
public:
    B(int y)
    {
        b = y;
    }
    void dispB()
    {
        cout<<b<<endl;
    }
};


class C:public A, public B
{
    int c;
public:
    C(int x, int y, int z): A(x), B(y), c(z)
    {
        cout<<"Constructor of parent classes are called. Data member of class C is initialized using initialization lists"<<endl;
    }
    void dispC()
    {
        cout<<c<<endl;
    }
};

int main()
{
    C obj(10, 20, 30);
    obj.dispA();
    obj.dispB();
    obj.dispC();

    return 0;
}
