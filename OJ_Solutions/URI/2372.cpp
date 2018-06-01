#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#define MAXN 112
#define INF 999999999
using namespace std;

int adj[MAXN][MAXN];
void fw(int n)
{
    for(int k = 0, d; k<n; ++k)
        for(int i = 0 ; i<n; ++i)
            for(int j = 0; j<n; ++j)
                if((d = adj[i][k]+adj[k][j])<adj[i][j])
                    adj[i][j] = d;
}
int main()
{
    int n, m,u,v,w;

    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; ++i)
        for(int  j = 0; j<n; ++j)
            adj[i][j] = INF;
    while(m--)
    {
        scanf("%d %d %d", &u, &v, &w);

        if(w<adj[u][v])
            adj[u][v] = w, adj[v][u] = w;
    }

    fw(n);

    for(int i = 0; i<n; ++i) adj[i][i] = -1;
    int resp = INF, cost;
    for(int i = 0, d, cost; i<n; ++i)
    {
        cost = 0;
        for(int j = 0; j<n; ++j)
        {
            if((d = adj[i][j])>cost && d!=INF)
                cost= d;
        }

        if(cost<resp)
                resp = cost;
    }


    printf("%d\n", resp);
}

