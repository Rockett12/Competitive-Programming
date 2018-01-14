
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a==0.0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    if((b*b - 4*a*c)<0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    x1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b - 4*a*c))/(2*a);

    printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
}
