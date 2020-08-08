#include<iostream>
using namespace std;

int main()
{
    int w,h,heart;
    char text;
    cin>>w>>h>>text>>heart;
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1;j <= w;j++)
        {
            if(j == w) cout<<text<<endl;
            else if(i == 1 || i == h) cout<<text;
            else if(heart == 0 && j != 1) cout<<' ';
            else cout<<text;
        }
    }
}