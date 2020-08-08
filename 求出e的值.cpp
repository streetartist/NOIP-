#include<cstdio>
using namespace std;

int main()
{
    double e,s = 1,t = 1;
    unsigned int n,i;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        t /= i;
        s += t;
    }
    printf("%.10f",s);
    return 0;
}