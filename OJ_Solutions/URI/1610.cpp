#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define UNVISITED -1
#define EXPLORED 0
#define VISITED 1
using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
vi vis;
queue<int> q;
bool dfs(int u)
{
    int v;
    for(int i = 0; i<(int)g[u].size(); ++i)
    {
        v = g[u][i];
        if(vis[v]==VISITED)
            continue;
        if(vis[v]==EXPLORED)
            return 1;
        vis[v] = EXPLORED;
        if(dfs(v)==1)
            return 1;
    }

    vis[u]=VISITED;
    return 0;
}


int main()
{$
    int n, m, t, u ,v,f;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        g.assign(n+1, vi());
        vis.assign(n+1, UNVISITED);
        f = 1;
        while(m--)
        {
            cin>>u>>v;
            g[v].pb(u);
        }

        for(int i =1; f && i<=n; ++i)
        {
            if(vis[i]!=VISITED)
            {
                vis[i]=EXPLORED;
                if(dfs(i))
                    f = 0;
            }

        }

        if(!f) cout<< "SIM\n";
        else cout<<"NAO\n";

    }
}

