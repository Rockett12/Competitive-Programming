#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#define F first
#define S second
#define MAXN 4123
#define MAXM 412345

using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
queue<int> q;

struct edge{
    int to, c, f;
}e[MAXM];

int cur= 0, TC =0, seen[MAXN], level[MAXN];
const int INF = 0x3f3f3f3f;
vi ptr;
void addge(int a, int b , int cp, int rc)
{
    e[cur].to = b, e[cur].c = cp, e[cur].f = 0;
    g[a].push_back(cur++);
    e[cur].to = a, e[cur].c = rc, e[cur].f = 0;
    g[b].push_back(cur++);
}

bool bfs(int s, int t)
{
    ++TC;
    level[s] = 0;
    seen[s] = TC;
    while(!q.empty())q.pop();
    q.push(s);
    int u, v, resf;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(level[u]==level[t] && seen[t]==TC)
            return 1;

        for(int i : g[u])
        {
            v = e[i].to, resf = e[i].c-e[i].f;
            if(seen[v]<TC && resf>0)
            {
                level[v] = level[u] +1;
                seen[v] = TC;
                q.push(v);
            }
        }
    }

    return 0;
}

int dfs(int s, int t, int flow)
{
    if(s==t)
        return flow;
    int eps, v, i;
    for(int &p = ptr[s]; p<(int)g[s].size(); ++p)
    {
        i = g[s][p];
        v = e[i].to, eps = e[i].c - e[i].f;
        if(level[v] == level[s]+1 && seen[v]==TC && eps>0)
        {
            if(eps = dfs(v,  t, min(eps, flow)))
            {
                e[i].f+=eps;
                e[i^1].f-=eps;
                return eps;
            }
        }
    }

    return 0;
}

int maxflow(int s, int t, int n)
{
    int mflow = 0, eps;
    while(bfs(s,t))
    {
       ptr.assign(2*n+4, 0);
       while(eps = dfs(s,t,INF))
       {
           mflow += eps;
       }
    }

    return mflow;
}

int main()
{

    int T,n, m, u,v,w,ans,s,t;
    scanf("%d", &T);
    while(T--)
    {
        cur = 0;
        scanf("%d %d", &n ,&m);
        g.assign(2*n+4, vi());
        t = 2*n +1;
        for(int i = 1; i<=n; ++i)
            addge(0,i, 1, 0);
        while(m--)
        {
            scanf("%d %d", &u, &v);
            addge(u,v+n,INF,0);
        }

        for(int i = 1+n; i<t; ++i)
            addge(i, t, 1, 0);

        ans = maxflow(0, t, n);
        printf("%d\n", n-ans);
    }
}

