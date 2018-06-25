#include <cstdio>
#include <vector>
#define MAXN 11234
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int TC = 0,ans, seen[MAXN];
graph g;
void dfs(int u)
{
    ++ans;
    seen[u]=TC;
    for(int i : g[u])
        if(seen[i]<TC)
            dfs(i), ++ans;
}

int main()
{
    int t,s, n,u, m, v;
    scanf("%d", &t);
    while(t--){
        ++TC;
        scanf("%d", &s);
        scanf("%d %d", &n, &m);
        g.assign(n+1, vi());
        while(m--)
        {
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        ans = 0;
        dfs(s);
        printf("%d\n", ans-1);
    }
}

