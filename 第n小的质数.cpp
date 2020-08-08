#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i;
    bool sushu;
    cin>>n;
    for(i = 2; n > 0; i ++)
    {
        sushu = true;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                sushu = false;
                break;
            }
        }
        if(sushu == true) n--;
    }
    cout<<i-1;
    return 0;
}