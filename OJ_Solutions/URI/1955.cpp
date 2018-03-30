#include <iostream>
#include <vector>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
vi vis;
queue<int> q;
void bfs(int s)
{
    vis[s]=1;
    q.push(s);
    int u;
    while(!q.empty())
    {
        u = q.front(); q.pop();

        for(int i = 0; i<(int)g[u].size(); ++i)
        {
            s = g[u][i];
            if(!vis[s])
                vis[s]=1;
        }
    }
}

int main()
{
    int n, k, c=0;
    cin>>n;
    g.assign(n+1, vi());
    vis.assign(n+1,0);
    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j)
        {
            cin>>k;
            if(k)
                g[i].pb(j);

        }

    for(int i = 0; i<n && c<3; ++i)
        if(!vis[i])
            c++, bfs(i);

    if(c>2)
        cout<<"Fail!\n";
    else
        cout<<"Bazinga!\n";

}

