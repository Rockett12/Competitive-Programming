#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    char a,b;
    scanf("%c%d %c%d", &a, &n, &b, &m);
    n = abs(n-m), m = abs((int)a-(int)b);
    n = (1<<n)|(1<<m);
    if(n==6) puts("VALIDO");
    else puts("INVALIDO");
}

