#include<iostream>
using namespace std;

int main()
{
    unsigned long n, i, j, ten = 10;
    bool seven = false;
    unsigned long a = 0;
    cin>>n;
    for(i = 1; i <= n;i++)
    {
        if(i % 7 != 0)
        {
            seven = false;
            j = i;
            do
            {
                if(j % ten == 7) seven = true;
                j /= ten;
            } while(j != 0 && seven == false);
        }
        else seven = true;
        if(!seven) a += i*i;
    }
    cout<<a;
    return 0;
}