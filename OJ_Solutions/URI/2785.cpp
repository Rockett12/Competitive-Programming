#include <cstdio>
#include <algorithm>
#define MAXN 112
using namespace std;

int dp[MAXN][MAXN], sum[MAXN][MAXN], n, TC = 0, seen[MAXN][MAXN];

int solve(int h, int l)
{
    if(h==1)
        return sum[h][l]-sum[h][l-h];
    if(seen[h][l]==TC)
        return dp[h][l];

    int ans = sum[h][l]-sum[h][l-h] + min(solve(h-1,l ), solve(h-1, l-1));

    seen[h][l] = TC;
    return dp[h][l] = ans;
}

int main()
{
    int n , m;
    scanf("%d", &n);
    ++TC;
    for(int i =1 ; i<=n; ++i)
        for(int j =1 ; j<=n; ++j)
        {
            scanf("%d", &m);
            sum[i][j]+= sum[i][j-1] + m;
        }


    printf("%d\n", solve(n,n));
}

