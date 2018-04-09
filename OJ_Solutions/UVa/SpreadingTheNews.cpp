#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define MAXN 3134
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
graph g;
queue<ii> q;
int vis[MAXN], TC=0, resp, marks,n;
vi prof;
void bfs(int m)
{

    q.push(mp(m, 0));
    vis[m]=TC;
    int ac;
    ii u;
    resp = 0;
    while(!q.empty())
    {
        ac = 0;
        u = q.front(); q.pop();

        for(int i = 0; i<(int)g[u.F].size(); ++i)
        {
            ac = g[u.F][i];
            if(vis[ac]!=TC)
            {
                prof[u.S+1]++;
                vis[ac]=TC;
                q.push(mp(ac,u.S+1));
            }
        }

    }

    for(int i= 0; i<=n; ++i)
    {
        if(prof[i]>resp)
            resp = prof[i], marks = i;
    }

}

int main()
{$
    int k, m;
    cin>>n;
    g.assign(n, vi());
    for(int i = 0; i<n; ++i)
    {
        cin>>k;
        while(k--)
        {
            cin>>m;
            g[i].pb(m);
        }
    }
    cin>>k;
    while(k--)
    {
        cin>>m;
        ++TC;
        prof.assign(n+1, 0);
        bfs(m);
        if(resp)
        {
            cout<<resp<<" "<<marks<<"\n";
        }
        else cout<<"0\n";
    }

}
