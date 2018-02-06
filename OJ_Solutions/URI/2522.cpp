#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 505
#define PB push_back

using namespace std;

typedef long long int ll;
typedef pair<int , ll> ii;
typedef pair<int , int> pi;
typedef vector<ii> vi;
typedef vector<vi> graph;

int vis[MAXN], TC = 0, n;
graph a;
priority_queue<ii> pq;
vector<pi> st(MAXN);

void build()
{
    pi v, u;
    ll w;

    for(int i =1; i<=n; ++i)
    {
        v = st[i];
        for(int j = i+1; j<=n; ++j)
        {
            u = st[j];
            w = (u.F-v.F)*(u.F-v.F) + (u.S-v.S)*(u.S-v.S);
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
{_
    cout.precision(2);
    cout.setf(ios::fixed);
    int  m, u ,v;
    ll w;
    double cost;
    ii z;
    while(cin>>n)
    {
        a.clear();
        a.assign(n+1, vi());
//        st.clear();
        ++TC;
        cost = 0;
        for(int i = 1; i<=n; ++i)
        {
            cin>>u>>v;

            st[i] = pi(u, v);
        }

        build();
        process(1);

        while(!pq.empty())
        {
            z = pq.top(); pq.pop();
            u = -z.S, w = - z.F;
            if(vis[u]!=TC)
            {
                cost+=sqrt(w), process(u);
            }
        }
        cout<<cost<<endl;
    }

}


