#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <sstream>
#include <map>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define mp make_pair
#define pb push_back
#define MAXN 212345
#define oo 999999999
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<ll> vi;
typedef vector<vi> graph;
graph g;
int pai[MAXN], vis[MAXN];


ll dfs(int u)
{
    vis[u]=1;
    ll cycle = 0;
    if((int)g[u].size()!=2)
         cycle -= oo;

    for(int v : g[u])
    {
        if(!vis[v])
        {
            pai[v] = u;
            cycle+= dfs(v);
        }
        else if(vis[v]==1 && pai[u]!=v && pai[v]!=u)
            ++cycle;
    }

    vis[u]=2;

    return cycle;
}

int main()
{$
    int a,b,n, m, resp =0;

    cin>>n>>m;
    g.assign(n+1, vi());
    while(m--)
    {
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }

    for(int i = 1; i<=n; ++i)
        if(!vis[i])
            if(dfs(i)>0LL)
                ++resp;

    cout<<resp<<'\n';
}
