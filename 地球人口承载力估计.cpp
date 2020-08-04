#include<cstdio>
using namespace std;

int main()
{
    float z;
    int x,a,y,b;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    z = (b*y-a*x)/(x-y);
    printf("%0.2f\n",z);
    return 0;
}