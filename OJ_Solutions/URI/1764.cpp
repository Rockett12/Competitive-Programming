#include <iostream>
#include <vector>
#include <queue>
#define F first
#define S second
#define _ ios::sync_with_stdio(0);
#define MAXN 40005
#define PB push_back
using namespace std;
typedef long long int ll;
typedef pair<int, ll> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;

int vis[MAXN], TC=0;
priority_queue<ii> pq;
graph a;

void process(int vtx)
{
    vis[vtx] = TC;
    ii v;
    for(int j =0; j<(int)a[vtx].size(); ++j)
    {
        v = a[vtx][j];
        if(vis[v.F]!=TC)
        {
            pq.push(ii(-v.S, -v.F));
        }
    }
}

int main()
{_
    int n, m, u, v;
    ll cost, tot, w;
    ii t;
    while((cin>>n>>m)&&n)
    {
        ++TC;
        cost  = 0;
        a.clear();
        a.assign(n+1, vi());
        while(m--)
        {
            cin>>u>>v>>w;
            a[u].PB(ii(v,w));
            a[v].PB(ii(u,w));
        }

        process(0);

        while(!pq.empty())
        {
            t = pq.top(); pq.pop();
            u = -t.S, w = -t.F;
            if(vis[u]!=TC)
            {
                cost+= w, process(u);
            }
        }

        cout<<cost<<endl;
    }
}

