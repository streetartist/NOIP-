#include<iostream>
using namespace std;

int main()
{
    unsigned int a,b;
    cin>>a;
    if(a == 1)
    {
        cout<<"End"<<endl;
    }
    else
    {
        do
        {
            if(a % 2 == 0)
            {
                cout<<a<<"/2=";
                a /= 2;
            }
            else
            {
                cout<<a<<"*3+1=";
                a = 3 * a + 1;
            }
            cout<<a<<endl;
        } while (a != 1);
        cout<<"End"<<endl;
        return 0;
    }
}