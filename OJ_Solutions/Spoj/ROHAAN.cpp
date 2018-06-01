#include <cstdio>
#include <algorithm>
#include <vector>
#define MAXN 55
#define F first
#define S second

using namespace std;

int adj[MAXN][MAXN];
void fw(int n)
{
    for(int k = 1, d; k<=n; ++k)
        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=n; ++j)
            {
                if((d = adj[i][k]+adj[k][j]) <adj[i][j])
                    adj[i][j] = d;
            }
}
int main()
{
    int t, n,u,v,w,q, cost;
    int TC=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);

        for(int i = 1; i<=n; ++i)
        {
            for(int j = 1; j<=n; ++j)
            {
                scanf("%d", &adj[i][j]);
            }
        }

        scanf("%d", &q);
        cost = 0;
        fw(n);
        while(q--)
        {
            scanf("%d %d", &u, &v);
            cost+=adj[u][v];
        }

        printf("Case #%d: %d\n",++TC, cost);
    }
}

