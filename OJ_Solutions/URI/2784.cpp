#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 112345
#define INF 999999999
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;

graph g;
int dist[MAXN], n, m;
priority_queue<ii> pq;

void sssp(int s)
{
    for(int i = 1; i<=n; ++i) dist[i] = INF;
    dist[s] = 0;
    pq.push(ii(0, s));
    int d, u;
    ii att;
    while(!pq.empty())
    {
        att = pq.top(); pq.pop();
        d = -att.F;
        u = att.S;

        if(d>dist[u]) continue;

        for(auto v : g[u])
        {
            if(dist[u] + v.S < dist[v.F])
            {
                dist[v.F] = dist[u] + v.S;
                pq.push(ii(-dist[v.F], v.F));
            }
        }
    }


}

int main()
{
    int k, u, v, w;

    scanf("%d %d", &n, &m);
    g.assign(n+1, vi());
    while(m--)
    {
        scanf("%d %d %d", &u, &v,&w);
        g[u].push_back(ii(v,w));
        g[v].push_back(ii(u,w));
    }

    scanf("%d", &k);

    sssp(k);
    int minor = INF, major = -1;
    for(int i = 1; i<=n; ++i)
    {
        if(i==k)continue;

        if(dist[i]<minor)
            minor = dist[i];
        if(dist[i]>major)
            major = dist[i];
    }

    printf("%d\n", major-minor);

}
