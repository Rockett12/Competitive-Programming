#include <cstdio>
#include <vector>
#include <algorithm>
#define MAXN 112345
using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int tin[MAXN],TC=0, low[MAXN], seen[MAXN],tempo;
bool any;

void dfs(int u, int p = -1)
{
    if(any)return;

    seen[u] = TC;
    tin[u] = low[u] = tempo++;
    int filhos = 0;
    for(int v : g[u])
    {
        if(v==p) continue;
        if(seen[v]==TC)
        {
            if(tin[v]<low[u]) low[u] = tin[v];
        }
        else
        {
            dfs(v, u);
            ++filhos;
            if(low[v]<low[u]) low[u] = low[v];

            if(low[v]>tin[u]) any = 1;
        }
        if(any) return;
    }

}

int main()
{
    int n , m,u,v;
    while(scanf("%d %d", &n, &m)&&n)
    {
        any = 0;
        tempo = 0;
        ++TC;
        g.assign(n+1, vi());
        while(m--)
        {
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(1);

        if(any) puts("N");
        else puts("S");

    }
}

