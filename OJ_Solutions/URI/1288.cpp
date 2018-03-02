#include <cstdio>
#include <algorithm>
#define MAXN 55
#define MAXM 105
int v[MAXN], w[MAXN], dp[2][MAXM];
using namespace std;
int main()
{
    int t, n, m, r;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(int i = 1; i<=n; ++i)
            scanf("%d %d", v+i, w+i);
        scanf("%d", &m);

        for(int i = 1; i<=m; ++i)
            dp[0][i] = 0;

        scanf("%d", &r);

        for(int i =1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
                dp[i&1][j] = max(dp[~i&1][j], (j>=w[i])*(dp[~i&1][j-w[i]]+v[i]));

        if(dp[n&1][m]>=r)
            puts("Missao completada com sucesso");
        else
            puts("Falha na missao");
    }
}

