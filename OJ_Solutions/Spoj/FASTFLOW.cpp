#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#define MAXN 5123
#define MAXM 71234
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef long long int ll;
int TC = 0,cur = 0, level[MAXN], seen[MAXN];
queue<int> q;
graph g;
vi ptr;
const int INF = 0x3f3f3f3f;

struct edge{
    int to;
    ll c, f;
} e[MAXM];
void addge(int a, int b, int cp, int rc)
{
    e[cur].to = b, e[cur].c = cp, e[cur].f = 0;
    g[a].push_back(cur++);
    e[cur].to = a, e[cur].c = rc, e[cur].f = 0;
    g[b].push_back(cur++);
}

bool bfs(int s, int t)
{
    ++TC;
    seen[s] = TC;
    level[s] = 0;
    while(!q.empty()) q.pop();

    ll resf;
    int u,v;
    q.push(s);

    while(!q.empty())
    {
        u = q.front(), q.pop();
        if(level[u] == level[t] && seen[t]==TC)
            return 1;

        for(int i : g[u])
        {
            v = e[i].to;
            resf = e[i].c - e[i].f;

            if(seen[v]<TC && resf>0)
            {
                seen[v] = TC;
                level[v] = level[u] +1;
                q.push(v);
            }
        }
    }

    return 0;
}

ll dfs(int s, int t, ll flow)
{
    if(s==t) return flow;

    ll eps, resf;
    int w, i;
    for(int& p =  ptr[s]; p<(int)g[s].size(); ++p )
    {
        i = g[s][p];
        w = e[i].to;
        resf = e[i].c - e[i].f;
        if(level[w] == level[s]+1 && seen[w]==TC && resf>0)
        {
            if(eps = dfs(w,t,min(resf, flow)))
            {
                e[i].f+=eps;
                e[i^1].f-=eps;
                return eps;
            }
        }
    }

    return 0;

}

ll maxflow(int s, int t, int n)
{
    ll mflow = 0, eps;
    while(bfs(s,t))
    {
        ptr.assign(n+1, 0);
        while(eps = dfs(s,t,INF))
            mflow +=eps;
    }

    return mflow;
}

int main()
{
    int m,u,v,n,w;
    scanf("%d %d", &n, &m);
    g.assign(n+1, vi());
    while(m--){
        scanf("%d %d %d", &u, &v, &w);
        addge(u,v,w,w);
    }

    ll ans = maxflow(1,n, n);
    printf("%lld\n", ans);
}
