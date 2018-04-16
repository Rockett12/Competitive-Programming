#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define F first
#define S second
#define pb push_back
#define MAXN 51234
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int dg[MAXN];
int main()
{$
    int n ,m, a, b;
    cin>>n>>m;
    g.assign(n+1, vi());
    priority_queue<int> pq;
    vi resp;
    while(m--)
    {
        cin>>a>>b;
        g[a].pb(b);
        ++dg[b];
    }

    for(int i = 0; i<n; ++i)
        if(!dg[i])
            pq.push(-i);
    while(!pq.empty())
    {
        a = -pq.top(); pq.pop();
        resp.pb(a);
        for(int i = 0; i<(int)g[a].size(); ++i)
        {
            b = g[a][i];
            if(--dg[b]==0)
                pq.push(-b);
        }
    }

    if((m = (int)resp.size()) == n)
        for(int i = 0; i<n; ++i)
            cout<<resp[i]<<'\n';
    else
        cout<<"*\n";
}
