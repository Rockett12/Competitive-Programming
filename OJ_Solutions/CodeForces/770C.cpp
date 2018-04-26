#include <iostream>
#include <queue>
#include <vector>
#define F first
#define S second
#define pb push_back
#define MAXN 112345
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
vi vis, mc, resp;
bool dfs(int u)
{
    vis[u] = 1;

    for(int i = 0, v; i<(int)g[u].size(); ++i)
    {
        v = g[u][i];
        if(!vis[v])
        {
            if(!dfs(v))
                return 0;
        }
        else if(vis[v]==1)
            return 0;
    }

    vis[u] = 2;
    resp.pb(u);
    return 1;
}
int main()
{$
    int n , k, m, u ,v;
    cin>>n>>k;
    g.assign(n+1, vi());
    vis.assign(n+1, 0);

    while(k--)
    {
        cin>>u;
        mc.pb(u);
    }

    for(int i = 1;i<=n; ++i)
    {
        cin>>m;
        while(m--)
        {
            cin>>v;
            g[i].pb(v);
        }

    }

    bool f =1;
    for(int i = 0; f && i<(int)mc.size(); ++i)
        if(!vis[mc[i]])
            if(!dfs(mc[i]))
                f = 0;

    if(f)
    {
        cout<<(m = (int)resp.size())<<'\n';

        cout<<resp[0];
        for(int i = 1 ; i<m ; ++i)
            cout<<' '<<resp[i];
        cout<<'\n';
    }
    else
        cout<<"-1\n";
}
