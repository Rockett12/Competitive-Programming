#include <cstdio>
#include <algorithm>
#define MAXN 105
#define MAXM 1050
int  v[MAXN], w[MAXN], dp[2][MAXM], stamp[MAXN][MAXN], TC=0, n, m;
using namespace std;
int main()
{
    while(scanf("%d", &n)&&n)
    {
        for(int i = 1; i<=n; ++i)
        {
            scanf("%d %d", v+i, w+i);

        }

        scanf("%d", &m);
        for(int i =1; i<=m; ++i) dp[0][i]=0;

        int atual = 1, prev = 0;
        for(int i = 1; i<=n; ++i)
        {
            for(int j= 1; j<=m; ++j)
            {
                dp[atual][j] = max(dp[prev][j], (j>=w[i])*(dp[prev][j-w[i]]+v[i]));
            }
            atual^=1, prev^=1;
        }

        printf("%d\n", dp[prev][m]);

    }
}

