#include <bits/stdc++.h>
#define endl '\n'
#define F first
#define S second
using namespace std;
using ll = long long int;
using vi = vector<pair<int, int> >;
using graph = vector<vi>;
const int MAXN = 212345;
int pai[MAXN], ans[MAXN];
graph g;
void sol(int u, int cor) {
    ans[u] = cor; 
    for (auto v : g[u]) if (pai[u] != v.F) {
        pai[v.F] = u;
        sol(v.F, cor^v.S);
    }
}
int main() {
    int n, m, k;
    scanf("%d", &n);
    int u, v, w;
    g.assign(n+1, vi());
    for (int i = 1; i<n; ++i) {
        scanf("%d %d %d", &u, &v, &w);
        g[u].emplace_back(v, w&1);
        g[v].emplace_back(u, w&1);
    }
    sol(1, 0);
    for (int i = 1; i<=n; ++i) {
        printf("%d\n", ans[i]);
    }
}
