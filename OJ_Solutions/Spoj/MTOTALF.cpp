#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define MAXM 2000
#define MAXN 1123
#define INF 999999999
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
struct cd{
    int to, f, c;
}E[MAXM];
graph g;
int TC=0, cur=0, seen[MAXN];

void addge(int a, int b, int cp, int rc){
    E[cur].to = b, E[cur].c = cp, E[cur].f = 0;
    g[a].push_back(cur++);
    E[cur].to = a, E[cur].c = rc, E[cur].f = 0;
    g[b].push_back(cur++);

}

int dfs(int s, int t, int flow)
{
    if(s==t)
        return flow;
    seen[s] = TC;
    int flux;
    for(int v : g[s])
    {
        if(seen[E[v].to]<TC && (flux = E[v].c-E[v].f) > 0)
        {
            if(int a = dfs(E[v].to, t, min(flow, flux)))
            {
                E[v].f+=a;
                E[v^1].f-=a;
                return a;
            }
        }
    }

    return 0;
}

int augpath(int s, int t)
{
    ++TC;
    int flow = 0;
    while(int a = dfs(s, t, INF))
    {
        flow+=a;
        ++TC;
    }

    return flow;
}

int main()
{$
    map<char, int> mp;

    int n, m, u, v;
    cin>>n;
    g.assign(n+1, vi());
    m = 1;
    char a, b;
    for(int i = n; i--;)
    {
        cin>>a>>b>>v;
        if(!mp[a])
            mp[a]=m++;
        if(!mp[b])
            mp[b]=m++;

        addge(mp[a], mp[b], v, 0);
    }

    cout<<augpath(mp['A'], mp['Z'])<<'\n';
}
