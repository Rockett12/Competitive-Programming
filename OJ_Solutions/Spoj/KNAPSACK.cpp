#include <cstdio>
#include <algorithm>
#define MAXN 2005
int v[MAXN], w[MAXN], dp[2][MAXN];

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);

    for(int i = 1; i<=n; ++i)
        scanf("%d %d", w+i, v+i);

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            dp[i&1][j] = max(dp[~i&1][j], (j>=w[i])*(dp[~i&1][j-w[i]] +v[i]));

    printf("%d\n", dp[n&1][m]);
}

