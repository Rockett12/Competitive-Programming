#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <map>
#define MAXN 5123
#define $ ios::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define F first
#define S second
#define pp(i, j) cout<<i<<" -> "<<j<<endl;
using namespace std;
typedef pair<int, int> ii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> graph;
int low[MAXN], num[MAXN],seen[MAXN], comp[MAXN], ans = 0, TC=0, cur = 0;

vi inv;
graph g, dag;

void dfs2(int s)
{
    low[s] = num[s] = ++TC;
    inv.push_back(s);
    seen[s] = 2;
    for(int i : g[s])
    {
        if(num[i] == 0)
            dfs2(i);
        if(seen[i] == 2)
            low[s] = min(low[i], low[s]);
    }
    int v;
    if(low[s] == num[s])
    {
        ++cur;

        while(1)
        {
            v = inv.back(); inv.pop_back(); seen[v] = 0;
            comp[v] = cur;
            if(v==s) break;
        }
    }
}

int dfs(int s)
{
    num[s] = 1;
    for(int i : g[s])
        if(!num[i])
            dfs(i);

}
int main()
{$
    int u,v,n, m, s;
    cin>>n>>m>>s;
    g.assign(n+1, vi());
    while(m--)
    {
        cin>>u>>v;
        g[u].push_back(v);
    }

    dfs(s);

    for(int i =1 ; i<=n ;++i)
        if(!num[i])
            dfs2(i);

    dag.assign(cur+1, vi());
    for(int i = 1, k,c; i<=n; ++i)
        if(c = comp[i])
            for(int j : g[i])
                if(c!=(k = comp[j]) && k)
                    dag[k].push_back(c);

    int ans = 0;
    for(auto i : dag)
        if(i.empty())
            ans++;

    cout<<ans-1<<endl;
}

