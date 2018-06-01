#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#define MAXM 212345
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
const int INF = 0x3f3f3f3f;

struct edge{
    int to, c, f;
}   e[MAXM];

int seen[MAXN], pai[MAXN], flow[MAXM], TC=0, cur=0;
graph g;
queue<int> q;
void addge(int a, int b, int cp, int rc)
{
    e[cur].to = b, e[cur].c = cp, e[cur].f = 0;
    g[a].push_back(cur++);
    e[cur].to = a, e[cur].c = rc, e[cur].f = 0;
    g[b].push_back(cur++);
}

bfs(int s, int t)
{
    ++TC;
    pai[s] = s;
    flow[s] = INF;
    q.push(s);
    int v,u,resf;
    while(!q.empty() && seen[t]<TC)
    {
        u = q.front(); q.pop();

        for(int i : g[u])
        {
            v = e[i].to, resf = e[i].c - e[i].f;
            if(seen[v]<TC && resf>0)
            {
                seen[v] = TC;
                pai[v] = i;
                flow[v] = min(resf, flow[u]);
                q.push(v);
            }
        }
    }
    while(!q.empty()) q.pop();

    if(seen[t]<TC)
        return 0;

    int p;
    for(v = t; v!=s; v = e[p^1].to)
    {
        p = pai[v];
        e[p].f+=flow[t];
        e[p^1].f-=flow[t];
    }

    return flow[t];


}

int maxflow(int s, int t)
{
    int mflow = 0, a;
    ++TC;
    while(a = bfs(s,t))
    {
        mflow+=a;
        ++TC;
    }

    return mflow;
}

int main()
{
    int n , m,u,v,w,s,t;
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
