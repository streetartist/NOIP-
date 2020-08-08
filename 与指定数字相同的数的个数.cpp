#include<iostream>
using namespace std;

int main()
{
    int number[100] = {};
    int n,m,same = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>number[i];
    }
    cin>>m;
    for(int i = 0; i < n; i++)
    {
        if(number[i] == m) same++;
    }
    cout<<same;
}