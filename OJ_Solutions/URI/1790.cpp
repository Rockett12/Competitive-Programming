#include <cstdio>
#include <vector>
#include <algorithm>
#define MAXN 55
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int n , m, TC=0, vis[MAXN],resp, timer;
vi tin, mint;
graph g;
void dfs(int u, int pai = -1)
{
    vis[u]= TC;
    tin[u] = mint[u] = timer++;

    for(int v : g[u])
    {
        if(v == pai)
            continue;
        if(vis[v]==TC)
        {
            if(tin[v]<mint[u])
                mint[u] = tin[v];
        }
        else
        {
            dfs(v, u);
            if(mint[v]<mint[u])
                mint[u] = mint[v];
            if(mint[v]>tin[u])
                ++resp;
        }

    }
}
int main()
{
    int u, v;
    while(scanf("%d %d", &n, &m)!=EOF){
        g.assign(n+1, vi());
        tin.assign(n+1, -1);
        mint.assign(n+1, -1);
        ++TC;
        resp = 0;
        while(m--)
        {
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }

        for(int i = 1; i<=n; ++i)
        {
            if(vis[i]!=TC)
            {
                timer = 0;
                dfs(i);
            }
        }

        printf("%d\n", resp);
    }
}

