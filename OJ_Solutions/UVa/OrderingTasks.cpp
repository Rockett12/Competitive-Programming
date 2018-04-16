#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define MAXN 112
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;

int vis[MAXN], TC=0;
graph g;
stack<int> p;
void dfs(int u)
{
    vis[u]=TC;
    int v;
    for(int i = 0; i<(int)g[u].size(); ++i)
    {
        v = g[u][i];
        if(vis[v]!=TC)
            dfs(v);
    }
    p.push(u);
}

int main()
{$
    int n,m, u, v;
    while(cin>>n>>m && n)
    {
        g.assign(n+1, vi());
        ++TC;
        while(m--)
        {
            cin>>u>>v;
            g[u].pb(v);
        }

        for(int i = 1; i<=n; ++i)
            if(vis[i]!=TC)
                dfs(i);

        cout<<p.top(); p.pop();

        while(!p.empty())
            cout<<" "<<p.top(), p.pop();

        cout<<"\n";
    }
}
