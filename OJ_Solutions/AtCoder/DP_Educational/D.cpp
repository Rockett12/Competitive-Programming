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
ll dp[MAXN], v[111], w[111];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<=n; ++i) {
        scanf("%lld %lld", w+i, v+i);
    }
    for (int i = 1; i<=n; ++i) {
        for (int j = m; j>=w[i]; --j) {
            dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
        }
    }
    printf("%lld\n", dp[m]);
}

