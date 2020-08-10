#include<iostream>
using namespace std;

int n, k, number[100],i,j;
float score[100];

int main()
{
    cin>>n>>k;
    for(i = 1; i <= n; i++)
    {
        cin>>number[i]>>score[i];
    }
    for(i = 1; i <= n - 1; i++)
    {
        for(j = 1; i <= n - i; j++)
        {
            if(score[j] > score[j+1])
            {
                swap(score[j], score[j+1]);
                swap(number[j], number[j+1]);
            }
        }
    }
    cout<<number[k]<<" "<<score[k];
    return 0;
}