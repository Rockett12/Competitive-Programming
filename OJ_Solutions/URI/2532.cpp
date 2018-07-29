#include <cstdio>
#include <algorithm>
#define MAXS 2123
#define MAXN 1123
#define INF 0x3f3f3f3f
using namespace std;

int dp[MAXS], w[MAXN], v[MAXN];
int main()
{
    int n , m, maxc;
    while(scanf("%d %d", &n, &m)!=EOF){
        maxc = 0;
        for(int i = 0; i<n; ++i)
            scanf("%d %d", w+i, v+i);
        for(int i = 1; i<=m; ++i)
            dp[i] = INF;

        for(int i = 0; i<n; maxc+=w[i++])
            for(int j = min(maxc+w[i], m); j>=1; --j)
                dp[j] = min(dp[j], (w[i]>=j)?v[i]:dp[j-w[i]]+v[i]);

        printf("%d\n", dp[m]==INF ? -1 : dp[m]);
    }
}
