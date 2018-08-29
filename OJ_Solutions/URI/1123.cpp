#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#define MAXN 1123
#define F first
#define S second
#define INF 0x3f3f3f3f
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
int dist[MAXN], adj[MAXN][MAXN];
graph g;
int n,m, o, d,u,v,w, ans;
priority_queue<ii> pq;
int sssp(int s) {
    for (int i = d; i<n; ++i) dist[i] = INF;

    pq.push({0, s});
    ii cur;
    int ds;
    dist[s] = 0;
    while (!pq.empty()) {
        cur = pq.top(); pq.pop();
        ds = -cur.F;
        u = cur.S;
        if (ds > dist[u])
            continue;
        for (auto v : g[u]) {
            if (v<d) {
                dist[d] = min(dist[v]+ds+adj[u][v], dist[d]);
                continue;
            }
            if (dist[v] > ds + adj[u][v]) {
                dist[v] = ds + adj[u][v];
                pq.push({-dist[v], v});
            }
        }

    }
    return dist[d];
}

int main() {

    while (scanf("%d %d %d %d", &n, &m, &d, &o)&&n) {
        g.assign(n, vi());
        while (m--) {
            scanf("%d %d %d", &u, &v, &w);
            adj[u][v] = w;
            adj[v][u] = w;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        d--;
        dist[d] = 0;
        for (int i = d-1; i>=0; --i)
            dist[i] = adj[i][i+1]+dist[i+1];

        printf("%d\n", sssp(o));
    }
}
