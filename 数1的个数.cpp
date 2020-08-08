#include<iostream>
using namespace std;

int main()
{
    int n,one = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j > 0; j /= 10)
        {
            if(j % 10 == 1) one++;
        }
    }
    cout<<one;
}