#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b,&c, &d);
    a = abs(a-c)+abs(b-d);
    printf("%d\n", a);
}

