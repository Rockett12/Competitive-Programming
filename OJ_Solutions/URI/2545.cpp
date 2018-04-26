#include <iostream>
#include <vector>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
graph g;
vi deg;
priority_queue<ii> pq;
int main()
{$
    int n, m,u,v, resp;
    ii w;


    while(cin>>n)
    {
        resp =1;
        g.assign(n+1, vi());
        deg.assign(n+1, 0);
        for(int i = 1; i<=n; ++i)
        {
            cin>>m;
            deg[i]+=m;
            while(m--)
            {
                cin>>u;
                g[u].pb(i);
            }
        }

        for(int i = 1;i<=n ; ++i)
            if(!deg[i])
                pq.push(ii(i,1));

        m = 0;
        while(!pq.empty())
        {
            w = pq.top(); pq.pop();
            m++;
            if(w.S > resp)
                resp = w.S;

            for(int i = 0 ;i<(int)g[w.F].size(); ++i)
            {
                v = g[w.F][i];
                if(--deg[v]==0)
                    pq.push(ii(v,w.S+1));
            }
        }

        if(m==n)
            cout<<resp<<'\n';
        else
            cout<<"-1\n";
    }
}
