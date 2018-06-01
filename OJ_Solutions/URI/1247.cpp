#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int d, vf,vc;
    while(scanf("%d %d %d", &d, &vf, &vc)!=EOF)
    {
        if(12.0/vf>=sqrt(12*12.0+d*d)/vc)
            puts("S");
        else
            puts("N");

    }
}

