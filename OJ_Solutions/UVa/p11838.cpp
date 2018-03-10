#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define F first
#define S second
#define pb push_back
#define MAXN 2005
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int vis[MAXN], TC=0,scc, ncount;
vi S, low, num;

void tarjanscc(int u)
{
    low[u] = num[u] = ncount++;
    S.pb(u);
    vis[u] = TC;
    int v;
    for(int i =0; i<(int)g[u].size(); ++i)
    {
        v = g[u][i];
        if(num[v]==-1)
            tarjanscc(v);
        if(vis[v]==TC)
            low[u]=min(low[u], low[v]);
    }

    if(low[u] == num[u])
    {
        ++scc;
        while(1)
        {
            v = S.back(); S.pop_back();
            vis[v] = TC-1;
            if(u==v)
                break;
        }
    }


}

int main()
{
    int n,m,u, v, p;
    while(scanf("%d %d",&n, &m)&&n)
    {
        ++TC;
        g.assign(n+1, vi());
        low.assign(n+1, 0);
        num.assign(n+1, -1);
        ncount = scc= 0;
        while(m--)
        {
            scanf("%d %d %d", &u, &v, &p);
            g[u].pb(v);

            if(p&2)
                g[v].pb(u);
        }

        for(int i =1; i<=n; ++i)
            if(num[i] == -1)
                tarjanscc(i);

        if(scc>1)
            puts("0");
        else
            puts("1");
    }
}
