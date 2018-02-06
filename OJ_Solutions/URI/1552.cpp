#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 505
#define PB push_back
using namespace std;
typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<int,ll> ii;
typedef vector<ii> vi;
typedef vector<vi> graph;

int vis[MAXN], TC=0, n;
graph a;
vector<pi> st(MAXN);
priority_queue<ii> pq;

void build()
{
    pi u, v;
    ll w;

    for(int i  =1 ; i<=n; ++i)
    {
        u = st[i];
        for(int j = i+1; j<=n; ++j)
        {
            v = st[j];
            w = (ll)(u.F-v.F)*(u.F-v.F)+(ll)(u.S-v.S)*(u.S-v.S);
//            cout<<w<<endl;
            a[i].PB(ii(j, w));
            a[j].PB(ii(i, w));
        }
    }
}

void process(int vt)
{
    vis[vt] = TC;
    ii v;

    for(int j = 0; j<(int)a[vt].size(); ++j)
    {
        v = a[vt][j];
        if(vis[v.F]!=TC)
            pq.push(ii(-v.S, -v.F));
    }
}

int main()
{
    cout.precision(2);
    cout.setf(ios::fixed);
    int t, m, u, b;
    ll w;
    ii v;
    double cost;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.clear();
        a.assign(n+1, vi());
        ++TC;
        cost = 0;

        for(int i =1; i<=n; ++i)
        {
            cin>>u>>b;
            st[i] = pi(u,b);
        }

        build();

        process(1);

        while(!pq.empty())
        {
            v = pq.top(); pq.pop();
            u = -v.S, w = - v.F;

            if(vis[u]!=TC)
                cost+=sqrt(w), process(u);
        }

        cout<<cost/100.0<<endl;
    }
}

