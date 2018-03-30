#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
vi vis;
queue<int> q;

bool bfs(int s)
{
    q.push(s);
    vis[s]=1;
    int u;
    bool isb = 1;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        for(int i = 0; isb && i<(int)g[u].size(); ++i)
        {
            s = g[u][i];
            if(vis[s]==-1)
                vis[s] = vis[u]^1, q.push(s);
            else if(vis[s]==vis[u])
                isb = 0;
        }
    }
    return isb;
}

int main()
{$
    int n, a, b;
    string s;
    stringstream ss;
    bool f;
    while(cin>>n && n)
    {
        g.assign(n+1, vi());
        vis.assign(n+1, -1);
        for(int i =1; i<=n; ++i)
        {
            cin>>a;
            getline(cin, s);

            getline(cin, s);
            ss.clear();
            ss.str(s);
            while(ss>>b)
                g[a].pb(b), g[b].pb(a);
        }
        f = 1;
        for(int i = 1;f && i<=n; ++i)
            if(vis[i]==-1)
                f = bfs(i);

        if(f) cout<<"SIM\n";
        else cout<<"NAO\n";
    }
}

