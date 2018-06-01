#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstring>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 512
#define pb push_back
#define INF 999999999
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
int adj[MAXN][MAXN], vis[MAXN][MAXN], TC=0, dist[MAXN],n, UD =0, vdist[MAXN];
graph g;
priority_queue<ii> pq;

int sssp(int s)
{
    ++UD;
    dist[s] = 0;
    vdist[s]= UD;
    pq.push(ii(0, s));
    ii p;
    int d, u;

    while(!pq.empty())
    {
        p = pq.top(); pq.pop();
        d = -p.F, u = p.S;
        if(d>dist[u]) continue;
        for(auto v: g[u])
        {
            if(vdist[v]!=UD) dist[v] = INF;
            if(dist[u] + adj[u][v] < dist[v])
            {
                dist[v] = dist[u] + adj[u][v];
                vdist[v] = UD;
                pq.push(ii(-dist[v], v));
            }
        }
    }

}

int main()
{
    int m,u,v,w, q;
    while(scanf("%d %d", &n, &m)&&n)
    {
        ++TC;
        g.assign(n+1, vi());

        while(m--)
        {
            scanf("%d %d %d", &u, &v, &w);
            g[u].pb(v);
            vis[u][v] = TC;
            adj[u][v] = w;
            if(vis[v][u]==TC)
                adj[u][v] = adj[v][u] = 0;
        }

        scanf("%d", &q);

        while(q--)
        {
            scanf("%d %d", &u, &v);
            sssp(u);
            if(dist[v]==INF || vdist[v]!=UD)
                puts("Nao e possivel entregar a carta");
            else
                printf("%d\n", dist[v]);

        }
        puts("");
    }
}
