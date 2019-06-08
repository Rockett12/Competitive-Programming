#include <bits/stdc++.h>
using namespace std;
const int MAXN = 112345;
const int mod = 1e9 + 7;
int n, d;
int di[MAXN];
bool seen[111][MAXN];
int dp[111][MAXN];
int sol(int i, int t, int r) {
    if (i < 0) return r == 0;
    if (seen[r][i] && t == 0) return dp[r][i];
    int ans = 0;
    for (int j = 0, k = t ? di[i] : 9; j<=k; ++j) {
        ans += sol(i-1, j == k && t, (j+r)%d);
        if (ans >= mod) ans -= mod;
    }
    seen[r][i] = t == 0;
    return t ? ans : dp[r][i] = ans;
}

int main() {
    int m, k;
    string s;
    cin >> s >> d;
    reverse(s.begin(), s.end());
    n = s.size();
    for (int i = 0; i<n; ++i) {
        di[i] = s[i] - '0';
    }
    int ans = sol(n-1, 1, 0) - 1;
    if (ans < 0) ans += mod;
    cout << ans << '\n';
}
