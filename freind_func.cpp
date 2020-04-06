#include<iostream>
using namespace std;

class C1
{
    int data;
public:
    void set_data();
    friend void display(C1);
};

void C1::set_data()
{
    cin>>data;
}

void display(C1 o)
{
    cout<<o.data;
}

int main()
{
    C1 o1;
    o1.set_data();
    display(o1);
}
