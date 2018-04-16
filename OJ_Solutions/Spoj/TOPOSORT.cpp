#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define MAXN 11234
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int dx[MAXN];
int main()
{$
    int n,m,a,b;
    priority_queue<int> pq;
    graph g;
    cin>>n>>m;
    g.assign(n+1, vi());
    vi resp;
    while(m--)
    {
        cin>>a>>b;
        g[a].pb(b);
        ++dx[b];
    }
    b = n;
    for(int i = 1; i<=n; ++i)
        if(!dx[i])
            pq.push(-i);
    while(!pq.empty())
    {
        m = -pq.top(); pq.pop();
        --b;
        resp.pb(m);
        for(int i = 0; i<(int)g[m].size(); ++i)
        {
            a = g[m][i];
            if(--dx[a]==0)
                pq.push(-a);
        }
    }
    if(b)
        cout<<"Sandro fails.\n";
    else
    {
        cout<<resp[0];
        for(int i = 1; i<n; ++i)
            cout<<" "<<resp[i];
        cout<<"\n";
    }
}

