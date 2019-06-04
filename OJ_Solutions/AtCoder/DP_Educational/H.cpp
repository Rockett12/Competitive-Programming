#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using graph = vector<vi>;
const int MAXN = 1123;
const int mod = 1000000007;
int dp[MAXN][MAXN];
char mat[MAXN][MAXN];
int main() {
    int n, m, k;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=m; ++j) {
            scanf(" %c", &mat[i][j]);
        }
    }
    dp[1][1] = 1;
    int ans = 0;
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=m; ++j) {
            if (mat[i][j] == '.') {
                ans = dp[i][j];
                ans += dp[i][j-1];
                if (ans >= mod) ans -= mod;
                ans += dp[i-1][j];
                if (ans >= mod) ans -= mod;
                dp[i][j] = ans;
            }
        }
    }
    printf("%d\n", ans);
}

