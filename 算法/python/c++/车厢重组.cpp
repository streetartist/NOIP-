#include<iostream>
using namespace std;

long n, i, j, t, s, a[1000];

int main()
{
    cin>>n;
    for(i = 1; i <= n;i++)
    {
        cin>>a[i];
    }
    for(i = 1; i <= n - 1; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}