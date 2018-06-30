#include <cstdio>
#include <algorithm>
#define MAXN 21234
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;

ll dp[2][MAXN], v[MAXN];
//ll solve(int be, int en)
//{
//    if(be>en)
//        return 0;
//    if(seen[be][en]==TC)
//        return dp[be][en];
//    seen[be][en] = TC;
//    return dp[be][en] = max(v[be]+max(solve(be+1, en-1), solve(be+2, en)), v[en]+max(solve(be+1, en-1), solve(be, en-2)));
//}

int main()
{
    int n , k, i, j, ini;
    v[0] = -INF;
    while(scanf("%d", &n)!=EOF){
        for(i = 1; i<=n; ++i)
            scanf("%lld", v+i);

        for(i = 1; i<=n; ++i)
            dp[0][i] = max(v[i], v[i-1]);

        for(i = 2, k = 1; i<=n; i+=2, k++)
            for(j = i+2, ini = 1; j<=n; j++, ini++)
                dp[k&1][j] = max(v[j] + max(dp[~k&1][j-2],dp[~k&1][j-1]), v[ini] + max(dp[~k&1][j-1], dp[~k&1][j]));

        printf("%lld\n", dp[k&1][n]);

    }
}
