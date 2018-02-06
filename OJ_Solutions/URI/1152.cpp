#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 200005
#define PB push_back
using namespace std;
typedef pair<int, long long int> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;

int vis[MAXN], TC=0;
graph a;
priority_queue<ii> pq;

void process(int vtx)
{
    vis[vtx]=TC;

    for(int j=0; j<(int)a[vtx].size(); ++j){
        ii v = a[vtx][j];
        if(vis[v.F]!=TC)
        {
            pq.push(ii(-v.S, -v.F));
        }
    }
}

int main()
{_
    int n, m, u, v ,w;
    ii topo;
    long long int cost, tot;

    while((cin>>n>>m)&&n)
    {
        ++TC;
        cost = tot = 0;
        a.clear();
        a.assign(n+1, vi());
        while(m--)
        {
            cin>>u>>v>>w;
            a[u].PB(ii(v, w));
            a[v].PB(ii(u, w));
            tot += (long long int)w;
        }

        process(0);

        while(!pq.empty())
        {
            topo = pq.top(); pq.pop();
            u = -topo.S, w = -topo.F;
            if(vis[u]!=TC)
            {
                cost += (long long int)w, process(u);
            }
        }

        cout<<tot-cost<<endl;
    }

}

