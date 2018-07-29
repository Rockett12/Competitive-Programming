#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#define MAXN 11234
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int dist[MAXN],seen[MAXN], prox, md=-1, TC=0;;
void dfs(int u){
    seen[u] = TC;
    for(auto v : g[u]){
        if(seen[v]<TC){
            dist[v] = dist[u]+1;
            if(dist[v]>md)
                prox = v, md = dist[v];
            dfs(v);
        }
    }
}
int main()
{$
    int n, m, k,u,v;
    char last = ' ';
    cin>>n;
    g.assign(n+1, vi());
    while(--n){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ++TC;
    dist[1]=0;
    dfs(1);
    md = -1;
    ++TC;
    dist[prox] = 0;
    dfs(prox);
    cout<<md<<endl;
}

