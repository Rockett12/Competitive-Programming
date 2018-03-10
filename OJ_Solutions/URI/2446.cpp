#include <cstdio>
#include <algorithm>
#define MAXM 112345
#define MAXN 1123

using namespace std;
int w[MAXN], dp[2][MAXM], n, m;


int main()
{
    scanf("%d %d", &m, &n);

    for(int i = 1; i<=n; ++i)
    scanf("%d", w+i);

    dp[0][0]=dp[1][0] = 1;

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            dp[i&1][j] = max(dp[~i&1][j], j>=w[i]?dp[~i&1][j-w[i]]:0);

    if(dp[n&1][m])
        puts("S");
    else
        puts("N");
}
