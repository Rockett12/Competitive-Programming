#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#define MAXN 11234
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;
int v[MAXN];
ll dp[2][MAXN];

int main()
{
    int n , m, k, j;
    v[0] = -INF;
    while(scanf("%d", &n)!=EOF)
    {

        for(int i = 1; i<=n ;++i)
            scanf("%d", v+i);

        for(int i = 1; i<=n; ++i)
            dp[0][i] = max(v[i], v[i-1]);

        for(j = 2, k = 1; j<=n; j+=2, ++k)
            for(int i = j+2, ini = 1; i<=n; ++i, ++ini)
                dp[k&1][i] = max(v[i] +min(dp[~k&1][i-2], dp[~k&1][i-1]), v[ini]+min(dp[~k&1][i-1], dp[~k&1][i]));


        printf("%lld\n", dp[k&1][n]);
    }
}
