#include <cstdio>
#include <cmath>
int main()
{
    long long int n;
    scanf("%lld", &n);
    double a, b;
    a = n/log(n);
    b = 1.25506*n/log(n);
    printf("%.1lf %.1lf\n", a, b);

}

