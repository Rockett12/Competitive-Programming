#include <bits/stdc++.h>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define endl '\n'
using namespace std;
using ll = long long int;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using graph = vector<vi>;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 112345;
int dp[MAXN], h[MAXN];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", h+i);
        dp[i] = INF;
    }
    dp[1] = 0;
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=k && i+j<=n; ++j) {
            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
        }
    }
    printf("%d\n", dp[n]);
}
