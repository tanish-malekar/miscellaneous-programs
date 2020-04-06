#include<iostream>
using namespace std;

class c1
{
public:
    int t1;
};

class c2:public c1
{
public:
    int t2;
};

class c3:public c1
{
public:
    int t3;
};

class c4:public c2, public c3
{
public:
    int t4;
};

int main()
{
    c1 o1;
    c2 o2;
    c3 o3;
    c4 o4;
    o1.t1=1;
    o2.t1=2;
    o3.t1=4;
    o4.t1=6;
    return 0;
}
