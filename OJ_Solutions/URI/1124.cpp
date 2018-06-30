#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int l, c, r1 , r2 , ans;
    double d1, d2, dist;
    while(scanf("%d %d %d %d", &l, &c, &r1, &r2)&&l){

        dist = r1+r2;
        d1 = l - (int)dist;
        d2 = c - (int)dist;
        d1 = sqrt(d2*d2+d1*d1);
        r1 = max(r1, r2);

        if(dist<=d1 && 2*r1<=l && 2*r1<=c)
            puts("S");
        else
            puts("N");
    }
}

