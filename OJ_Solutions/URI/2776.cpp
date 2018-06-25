#include <cstdio>
#include <algorithm>
#define MAXN 1123
#define MAXM 2123

using namespace std;
const int inf = -0x3f3f3f3f;
int w[MAXN], v[MAXN], TC = 0, n;
int dp[MAXM];

int main()
{
    int m, ans;
    dp[0] = 0;
    while(scanf("%d %d", &n, &m)!=EOF)
    {
        for(int i = 1; i<=n; ++i)
            scanf("%d %d", w+i, v+i);

        for(int i = 1; i<=m; ++i) dp[i] = -1;

        for(int i = 1, k; i<=n; ++i)
            for(int j = w[i]; j<=m; ++j)
                if((k = dp[j-w[i]])!=-1)
                    if((k+=v[i]) > dp[j])
                        dp[j] = k;

        printf("%d\n", dp[m]);
    }
}
