#include<iostream>
using namespace std;

int main()
{
    double h,a;
    cin>>h;
    a = h;
    for(int i = 1;i < 10;i++)
    {
        h = h/2;
        a += h*2;
    }
    h = h/2;
    cout<<a<<endl<<h<<endl;
    return 0;
}