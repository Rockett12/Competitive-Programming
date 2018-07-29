#include <cstdio>
#include <algorithm>
#define MAXN 2123
#define INF 0x3f3f3f3f
using namespace std;
int v[MAXN], c[MAXN], dp[MAXN][MAXN], ans[MAXN], cur;
int main()
{
    int n , m, p ,a, r, l, bs;
    while(scanf("%d %d %d %d", &n, &a, &m, &p)!=EOF){
        cur = 0;
        for(int i = 0; i<m; ++i)
            scanf("%d", c+i);

        c[m] = INF, bs = c[0];

        for(int i = 1; i<=m; ++i)
            scanf("%d", v+i);

        for(int i = 0; i<=n || i<=m; ++i)
            dp[n+1][i] = 0, dp[i][m+1] = INF;

        for(int i = n; i>=1; --i)
            for(int j = m; j>=1; --j)
                dp[i][j] = min (p-v[j]+bs+dp[i+1][1], c[j]+dp[i+1][j+1]);

        r = 1, l = a;
        while(r<=n)
            if(dp[r][l] == p-v[l]+bs+dp[r+1][1])
                l = 1, ans[cur++] = r++;
            else
                ++r,++l;

        printf("%d\n", dp[1][a]);
        if(cur)
            for(int i = 0; i<cur; ++i)
                printf("%d%c", ans[i], i==cur-1? '\n':' ');
        else
            puts("0");
    }
}
