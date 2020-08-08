#include<iostream>
using namespace std;

int main()
{
    int n,day = 1,money = 0;
    cin>>n;
    while(n > 0)
    {
        for(int i = 1; i <= day; i++)
        {
            money += day;
            n--;
        }
        day++;
    }
    cout<<money;
}