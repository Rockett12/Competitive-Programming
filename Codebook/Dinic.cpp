#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#define MAXN 112345
#define MAXM 212345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
const int INF = 0x3f3f3f3f;

struct edge{
    int to, c, f;
} e[MAXM];
int cur = 0, TC = 0, seen[MAXN], level[MAXN];
graph g;
queue<int> q;
void addge(int a, int b , int cp, int rc)
{
    e[cur].to = b , e[cur].c = cp, e[cur].f = 0;
    g[a].push_back(cur++);
    e[cur].to = a, e[cur].c = rc, e[cur].f = 0;
    g[b].push_back(cur++);
}
bool bfs(int s , int t)
{
    ++TC;
    level[s] = 0;
    seen[s] = TC;
    while(!q.empty()) q.pop();
    q.push(s);
    int u, v, resf;
    while(!q.empty())
    {

        u = q.front(); q.pop();
        if(level[u] == level[t] && seen[t]==TC)
            break;

        for(int i : g[u])
        {
            v = e[i].to, resf = e[i].c - e[i].f;

            if(seen[v]<TC && resf>0)
            {
                level[v] = level[u] +1;
                seen[v] = TC;
                q.push(v);
            }
        }

    }

    return seen[t]==TC;
}
vi ptr;
int augment(int u, int t, int cap)
{
    if(u==t)
        return cap;

    int eps, v;
    for(int &p = ptr[u], w, i, resf; p<(int)g[u].size(); ++p)
    {
        i = g[u][p];
        v = e[i].to, resf = e[i].c - e[i].f;
        if(level[v] == level[u]+1 && seen[v]==TC && resf>0)
        {
            if(eps = augment(v, t, min(resf, cap)))
            {
                e[i].f += eps;
                e[i^1].f -=eps;
                return eps;
            }
        }

    }

    return 0;
}
int n;
int maxflow(int s, int t)
{
    int mflow = 0,a;

    while(bfs(s,t))
    {
        ptr.assign(n+1, 0);
        while(a = augment(s,t,INF))
        {
            mflow +=a;
        }
    }

    return mflow;
}
int main()
{
    int m,u,v,w,s,t;
    scanf("%d %d", &n, &m);
    g.assign(n+1, vi());

    while(m--)
    {
        scanf("%d %d %d", &u, &v, &w);
        addge(u,v,w,0);
    }
    scanf("%d %d", &s, &t);
    m = maxflow(s,t);

    printf("%d\n", m);
}
