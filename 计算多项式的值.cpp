#include<cstdio>
using namespace std;

int main()
{
    double x, a = 1, t = 1;
    unsigned int n, i;
    scanf("%lf %d",&x,&n);
    for(i = 1; i <= n; i++)
    {
        t *= x;
        a += t;
    }
    printf("%.2lf",a);
    return 0;
}