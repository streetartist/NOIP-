#include<iostream>
using namespace std;

int main()
{
    unsigned int s = 0,t = 1;
    unsigned short n,i;
    cin>>n;
    for(i = 1;i <= n;i++)
    {
        t *= i;
        s += t;
    }
    cout<<s<<endl;
    return 0;
}