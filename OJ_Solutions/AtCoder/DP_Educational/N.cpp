#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MAXN = 444;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
ll v[MAXN], sum[MAXN];
ll dp[MAXN][MAXN];

int main() {
    int n, m, k;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%lld", v+i);
        sum[i] += sum[i-1] + v[i];
    }
    ll ans;
    for (int l = 2; l<=n; ++l) {
        for (int i = 1, j = l; j<=n; ++j, ++i) {
            ans = INFL;
            for (int k = i; k<j; ++k) {
                ans = min(ans, dp[i][k]+dp[k+1][j]);
            }
            dp[i][j] = ans+sum[j]-sum[i-1];
        }
    }
    printf("%lld\n", dp[1][n]);
}
