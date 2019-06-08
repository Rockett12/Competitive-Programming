#include <bits/stdc++.h>
#define $ ios::sync_with_stdio(0);
using namespace std;
const int MAXN = 3123;
const int mod = 1e9 + 7;
int dp[MAXN], sum[MAXN];

int main() {$
    int n, m, k;
    string s;
    cin >> n >> s;
    s = "00" + s;
    dp[1] = 1;
    for (int i = 2; i<=n+1; ++i) {
        for (int j = 1; j<=n; ++j) {
            sum[j] = sum[j-1] + dp[j];
            if (sum[j] >= mod) sum[j] -= mod;
        }
        if (i <= n) {
            for (int j = 1; j<=i; ++j) {
                if (s[i] == '<') {
                    dp[j] = sum[j-1];     
                } else {
                    dp[j] = sum[n]-sum[j-1];
                    if (dp[j] < 0) dp[j] += mod;
                }
            }
        }
    }

    printf("%d\n", sum[n]);

}
