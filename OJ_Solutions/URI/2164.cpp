#include <iostream>
#define $ ios::sync_with_stdio(0);
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    double a;
    a = pow((1+sqrt(5))/2.0, n) - pow((1-sqrt(5))/2.0, n);
    a/=sqrt(5);

    printf("%.1lf\n", a);


}

