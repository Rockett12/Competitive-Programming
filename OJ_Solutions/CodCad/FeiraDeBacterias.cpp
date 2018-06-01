#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
    double a,b,c,d;
    int n;
    int resp = 0;

    scanf("%d", &n);
    scanf("%lf %lf", &a, &b);
    b*=log2(a);
    for(int i =1; i<n; ++i)
    {
        scanf("%lf %lf", &c, &d);
        d*=log2(c);
        if(d>b)
            resp = i, b = d;
    }

    printf("%d\n", resp);
}
