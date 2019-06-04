#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using graph = vector<vi>;
const int MAXN = 212345;
graph g;
int h[MAXN];
bool seen[MAXN];

void sol(int u) {
    seen[u] = 1;
    h[u] = 0;
    for (auto v : g[u]) {
        if (!seen[v]) {
            sol(v);
        }
        h[u] = max(h[u], 1+h[v]);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    g.assign(n+1, vi());
    int u, v;
    while (m--) {
        scanf("%d %d", &u, &v);
        g[u].emplace_back(v);
    }
    int ans = 0;
    for (int i = 1; i<=n; ++i) {
        if (!seen[i]) {
            sol(i);
            ans = max(ans, h[i]);
        }
    }
    printf("%d\n", ans);

}
