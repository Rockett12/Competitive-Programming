#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
    double  a, b,c;
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        scanf("%lf %lf %lf", &a, &b,&c);
        a = sqrt(a*a +b*b)*c*n*0.0001;
        printf("%.4lf\n", a);
    }
}

