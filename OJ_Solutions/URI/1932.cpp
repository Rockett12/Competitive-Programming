#include <cstdio>
#include <cctype>
#include <algorithm>
#define MAXN 212345
using namespace std;
int v[MAXN];
int main()
{
    int n , c, one=0, zero=0, n0, n1;
    scanf("%d %d", &n, &c);

    for(int i = 1; i<=n; ++i)
        scanf("%d", v+i);

    for(int i = n; i>=0; --i){
        n0 = max(zero, -(c+v[i+1])+one);
        n1 = max(one, v[i+1]+zero);
        one = n1, zero = n0;
    }

    printf("%d\n", zero);
}
