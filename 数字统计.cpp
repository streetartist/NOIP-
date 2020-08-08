#include<iostream>
using namespace std;

int main()
{
    int l, r, two = 0;
    cin>>l>>r;
    for(l; l <= r; l++)
    {
        for(int i = l; i > 0; i /= 10)
        {
            if(i % 10 == 2)
            {
                two++;
            }
        }
    }
    cout<<two;
    return 0;
}