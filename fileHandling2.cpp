#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf;
    outf.open("data");
    outf<<"Hi there! ";
    outf.close();
    return 0;
}
