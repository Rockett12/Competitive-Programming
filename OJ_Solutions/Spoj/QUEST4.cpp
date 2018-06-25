#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
#define MAXN 400
#define MAXM 41234
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
const int INF = 0x3f3f3f3f;

int cur = 0, seen[MAXN], level[MAXN], TC = 0;
vi ptr;
queue<int> q;
graph g;

struct edge{
    int to, f, c;
} e[MAXM];
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
    while(!q.empty()) q.pop();
    q.push(s);
    int w, eps;

    while(!q.empty())
    {
        s = q.front(); q.pop();
        if(level[s] == level[t] && seen[t]==TC)
            return 1;
        for(int i : g[s])
        {
            w = e[i].to, eps = e[i].c-e[i].f;
            if(seen[w]<TC && eps>0)
            {
                level[w] = level[s]+1;
                seen[w] = TC;
                q.push(w);
            }
        }
    }

    return 0;

}

int dfs(int s, int t, int flow)
{
    if(s==t)
        return flow;

    int i,v, w, eps;

    for(int& p = ptr[s]; p<(int)g[s].size(); ++p)
    {
        i = g[s][p];
        w = e[i].to, eps = e[i].c-e[i].f;
        if(level[w] == level[s]+1 && seen[w]==TC && eps>0)
        {
            if(eps = dfs(w,t,min(eps, flow)))
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
        ptr.assign(2*n+2, 0);

        while(eps = dfs(s,t,INF))
        {
            mflow +=eps;
        }
    }

    return mflow;
}

int main()
{
    int t = (120<<1)|1, n=120, m, T, ans;
    scanf("%d", &T);
    int v, w;
    while(T--)
    {
        g.assign(244, vi());
        cur = 0;
        for(int i = 1; i<=n; ++i)
            addge(0, i, 1, 0);
        scanf("%d", &m);
        while(m--)
        {
            scanf("%d %d", &v, &w);
            addge(v+1, w+1+n, 1, 0);
        }

        for(int i = n+1; i<t; ++i) addge(i, t, 1, 0);

        ans = maxflow(0,t,n);
        printf("%d\n", ans);
    }
}
