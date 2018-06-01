#include <iostream>
#include <cstdio>
#include <vector>
#define F first
#define S second
#define MAXN 112345

using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
int vis[MAXN];
bool f =1;
int dfs(int u)
{
    int peso=0, sum=0,acc=0;
    vis[u]=1;
    int tam = (int)g[u].size();

    if(tam)
        peso = dfs(g[u][0]);
    acc+=peso;
    for(int i = 1, v; i<tam; ++i)
    {
        v = g[u][i];
        sum = dfs(v);
        if(peso!=sum)
            f = 0;
        acc+=sum;
    }

    return acc+1;
}
int main()
{
    int n, u,v;

    scanf("%d", &n);
    g.assign(n+1, vi());
    while(n--)
    {
        scanf("%d %d", &u, &v);
        g[v].push_back(u);
    }

    dfs(0);

    printf("%s\n", f? "bem": "mal");
}
