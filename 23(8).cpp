#include<iostream>
using namespace std;
int main()
{
    int a=15;
    int b=20;
    cout<<"a="<<a<<"b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap:"<<endl;
    cout<<"a="<<a<<"b="<<b;
}
