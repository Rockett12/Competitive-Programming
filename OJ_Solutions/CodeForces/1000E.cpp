#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAXN 312345
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long int ll;
typedef pair<ll,int > ii;
typedef vector<int> vi;
typedef vector<vi> graph;
int cmp[MAXN], cur=0, seen[MAXN],low[MAXN], tin[MAXN], TC = 1;
graph g, ctree;
vi cycle;
void contract(int u, int pai = -1)
{
    low[u] = tin[u] = TC++;
    cycle.pb(u);
    seen[u] = 1;
    for(auto v : g[u])
    {
        if(!tin[v])
            contract(v, u);
        if(seen[v] && v!=pai)
            if(low[v]<low[u])
                low[u] = low[v];
    }

    int v;
    if(low[u] == tin[u])
    {

        while(1){
            v = cycle.back(); cycle.pop_back(); seen[v] = 0;
            cmp[v] = cur;
            if(u==v)
                break;
        }
        ++cur;
    }
}

void makeCtree(int n)
{
    for(int i = 1; i<=n; ++i)
        for(auto j : g[i])
            if(cmp[j]!=cmp[i])
                ctree[cmp[i]].pb(cmp[j]);
}

queue<ii> q;
ii bfs(int u) //comp[u]
{
    ++TC;
    q.push({u, 0});
    seen[u] = TC;
    ii fis;
    while(!q.empty())
    {
        fis = q.front(); q.pop();
        for(auto j : ctree[fis.F])
        {
            if(seen[j]<TC)
            seen[j]=TC, q.push({j, fis.S+1});
        }
    }

    return fis;
}

int main()
{
    int n , m, k,u ,v;
    scanf("%d %d", &n, &m);
    g.assign(n+1, vi());
    ctree.assign(n+1, vi());
    while(m--)
    {
        scanf("%d %d", &u, &v);
        g[u].pb(v);
        g[v].pb(u);
    }

    contract(1);
    makeCtree(n);
    ii ans = bfs(0);
    ans = bfs(ans.F);

    printf("%d\n", ans.S);



}
