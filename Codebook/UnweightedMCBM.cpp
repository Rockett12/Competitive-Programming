#include <cstdio>
#include <algorithm>
#include <vector>
#define MAXN 1123
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int seen[MAXN], vis[MAXN], TC=0, UD = 0, match[MAXN];
graph g;
int dfs(int u)
{
    if(seen[u]==TC) return 0;
    seen[u] = TC;

    for(int i : g[u])
    {
        if(vis[i]<UD || dfs(match[i]))
        {
            match[i] = u;
            vis[i] = UD;
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n , m,u,v, ans;
    while(scanf("%d %d", &n, &m)!=EOF)
    {
        g.assign(n+1, vi());
        ++UD;
        while(m--)
        {
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
        }

        ans = 0;
        for(int i = 1 ; i<=n; ++i)
        {
            ++TC;
            ans+=dfs(i);
        }

        printf("%d\n", n-ans);


    }
}
