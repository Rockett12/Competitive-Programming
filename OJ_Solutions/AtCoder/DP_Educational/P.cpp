#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using graph = vector<vi>;
const int MAXN = 112345;
const ll mod = 1000000007;
int pai[MAXN];
ll dp[2][MAXN];
bool seen[2][MAXN];
graph g;

ll dfs(int u, int c) {
    ll b = 1, w = 1;
    bool folha = 1;
    if (seen[c][u]) return dp[c][u];
    for (auto v : g[u]) {
        if (pai[u] == v) continue;
        pai[v] = u;
        if (c == 1) {
            w = w * dfs(v, 0) % mod;
        } else {
            w = w * dfs(v, 0) % mod;
            b = b * dfs(v, 1) % mod;
        }
        folha = 0;
    }
    if (folha) return c == 0 ? 2 : 1;
    seen[c][u] = 1;
    return dp[c][u] = c ? w : (b+w)%mod;
}
int main() {
    int n, m, k;
    scanf("%d", &n);
    g.assign(n+1, vi());
    for (int i = 1, u, v; i<n; ++i) {
        scanf("%d %d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }

    printf("%lld\n", dfs(1, 0));

}

