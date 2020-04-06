#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20], name1[20];
    float cost, cost1;
    ofstream outf("data");
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the cost: ";
    cin>>cost;
    outf<<name<<"\n";
    outf<<cost<<"\n";
    outf.close();
    ifstream inf("data");
    inf>>name1;
    inf>>cost1;
    cout<<"The item name is "<<name1<<endl;
    cout<<"The item cost is "<<cost1<<endl;
    inf.close();
    return 0;
}
