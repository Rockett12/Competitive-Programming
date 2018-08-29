#include <cstdio>
#include <algorithm>
#define MAXN 1123
using namespace std;
int dp[3][2][MAXN], w[MAXN], v[MAXN], t[MAXN];
int main()
{
    int n ,m;
    char x, a, b;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<=n; ++i) {
        scanf("%d %c %d", v+i, &x, w+i);
        if (x == 'G') t[i] = 1;
        else if (x == 'C') t[i] = 2;
        else t[i] = 4;
    }

    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=m; ++j) {
            dp[0][i&1][j] = dp[0][~i&1][j];
            dp[1][i&1][j] = dp[1][~i&1][j];
            dp[2][i&1][j] = dp[2][~i&1][j];
            if (t[i] == 1) {
                dp[0][i&1][j] = max(dp[0][~i&1][j], (j>=w[i])?v[i]+dp[0][~i&1][j-w[i]]: 0);
                dp[1][i&1][j] = max(dp[1][~i&1][j], (j>=w[i])?v[i]+dp[1][~i&1][j-w[i]]: 0);
            } else if (t[i] == 2) {
                dp[0][i&1][j] = max(dp[0][~i&1][j], (j>=w[i])?v[i]+dp[0][~i&1][j-w[i]]: 0);
                dp[2][i&1][j] = max(dp[2][~i&1][j], (j>=w[i])?v[i]+dp[2][~i&1][j-w[i]]: 0);
            } else {
                dp[1][i&1][j] = max(dp[1][~i&1][j], (j>=w[i])?v[i]+dp[1][~i&1][j-w[i]]: 0);
                dp[2][i&1][j] = max(dp[2][~i&1][j], (j>=w[i])?v[i]+dp[2][~i&1][j-w[i]]: 0);
            }
        }
    }
    printf("%d\n", max(max(dp[0][n&1][m],dp[1][n&1][m]), dp[2][n&1][m]));
}
