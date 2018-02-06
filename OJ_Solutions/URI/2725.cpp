#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define PB push_back
#define MAXN 1001
#define des 10000
using namespace std;
typedef long long int ll;
typedef pair<ll, int> ii;
typedef pair<int, int> pi;
typedef vector<ii> vi;
typedef vector<vi> graph;

int n, vis[MAXN], TC=0, k;
vector< pi> st(MAXN);
graph g;
priority_queue<ii> pq;

void calc()
{
    pi u, v;
    int dy, dx;
    ll w;
    for(int i = 0; i<n; ++i)
    {
        u = st[i];
        for(int j = i+1; j<n; ++j)
        {
            v = st[j];
            dy = abs(u.S-v.S);
            dx = abs(u.F - v.F);
            if(!dx)
                w = (dy-1)*k;
            else if(!dy || dx==dy)
                w = (dx-1)*k;
            else
                w= (__gcd(dy, dx)-1)*k;

            g[i].PB(ii( w, j));
            g[j].PB(ii( w, i));
        }
    }
}

void process(int v)
{
    vis[v] = TC;
    ii u;
    for(int i = 0; i<(int)g[v].size(); ++i)
    {
        u = g[v][i];
        if(vis[u.S]!=TC)
            pq.push(ii(-u.F, -u.S));
    }
}

int main()
{_
    ll cost=0, w;

    int t,a,b;
    cin>>t;
    while(t--)
    {
        ++TC;
        cin>>n>>k;
        g.clear();
        g.assign(n+1, vi());
        cost= 0;
        for(int i =0; i<n; ++i)
        {
            cin>>a>>b;
            st[i] = pi(a+des, b+des);
        }
        calc();
        process(0);
        ii u;
        while(!pq.empty())
        {
            u = pq.top(); pq.pop();
            a = -u.S, w = -u.F;
            if(vis[a]!=TC)
                cost+= w, process(a);
        }


        cout<<cost<<endl;
    }
}

