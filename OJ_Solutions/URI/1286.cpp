#include <cstdio>
#include <algorithm>
#define MAXN 35
int v[MAXN],w[MAXN], dp[2][MAXN];
using namespace std;
int main()
{
    int n, p;
    while(scanf("%d", &n)&&n)
    {
        scanf("%d", &p);
        for(int i =1; i<=n; ++i)
            scanf("%d %d", v+i, w+i);

        for(int i =1; i<=p; ++i)
            dp[0][i] = 0;

        for(int i =1; i<=n; ++i)
            for(int j = 1; j<=p; ++j)
                dp[i&1][j] = max(dp[~i&1][j], (j>=w[i])*(dp[~i&1][j-w[i]] + v[i]));

        printf("%d min.\n", dp[n&1][p]);
    }
}
