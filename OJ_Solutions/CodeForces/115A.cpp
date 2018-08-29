#include <vector>
#include <algorithm>
#include <queue>
#include <cstdio>
#define MAXN 2123
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int deg[MAXN],dist[MAXN], ans = 0;
graph g;

int main()
{
    int n, m ;
    scanf("%d", &n);
    g.assign(n+1, vi());
    queue<int> q;
    for(int i = 1; i<=n; ++i){
        scanf("%d", &m);
        if(m==-1) continue;
        g[i].push_back(m);
        ++deg[m];
    }
    for(int i = 1; i<=n; ++i)
        if(!deg[i])
            q.push(i);

    while(!q.empty()){
        m = q.front(); q.pop();
        for(auto v : g[m]){
            --deg[v];
            dist[v] = max(dist[v], dist[m]+1);
            ans = max(ans, dist[v]);
            if(!deg[v])
                q.push(v);
        }
    }

    printf("%d\n", ans+1);
}

