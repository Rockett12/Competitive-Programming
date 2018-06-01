#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#define MAXN 412

using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int tin[MAXN], low[MAXN], seen[MAXN], TC=0, tempo;
set<int> resp;
void dfs(int u, int p = -1)
{
    seen[u] = TC;
    tin[u] = low[u] = tempo++;
    int filhos = 0;
    for(int v : g[u])
    {
        if(v==p) continue;
        if(seen[v]==TC) {
            if(tin[v]<low[u]) low[u] = tin[v];
        }
        else
        {
            dfs(v, u);
            if(low[v]<low[u]) low[u] = low[v];
            ++filhos;
            if(p!=-1 && low[v]>=tin[u]) resp.insert(u);
        }
    }

    if(p==-1 && filhos>1) resp.insert(u);
}
int main()
{
    int n , m,u,v;
    while(scanf("%d %d", &n, &m)!=EOF &&n)
    {
        resp.clear();
        g.assign(n+1, vi());
        ++TC;
        while(m--)
        {
            scanf("%d %d", &u, &v);
            g[v].push_back(u);
            g[u].push_back(v);
        }

        dfs(1);

        printf("Teste %d\n", TC);

        if(resp.empty())
            printf("nenhum");
        else
            for(int a : resp)
                printf("%d ", a);
        puts("\n");
    }
}

