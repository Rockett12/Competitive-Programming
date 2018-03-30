#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
vi vis ,resp;
queue<int> q;
int p;
void bfs(int s)
{
    vis[s]=0;
    q.push(s);
    int u, v;
    while(!q.empty())
    {
        u = q.front(); q.pop();

        for(int i =0; i<(int)g[u].size(); ++i)
        {
            v = g[u][i];
            if(vis[v]==-1 && vis[u]+1<=p)
                q.push(v), vis[v] = vis[u]+1, resp.pb(v);

        }
    }

}
int main()
{$
    int n, m, s, u, v, f=1;

    while(cin>>n>>m>>s>>p && n)
    {
        g.assign(n+1, vi());
        vis.assign(n+1, -1);
        resp.clear();
        while(m--)
        {
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }

        bfs(s);

        sort(resp.begin(), resp.end());
        cout<<"Teste "<< f++ <<endl;

        for(int i = 0; i<(int)resp.size(); ++i)
            cout<<resp[i]<<" ";

        cout<<endl<<endl;
    }

}

