#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>
#define pb push_back
#define oo 9999
using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;

graph g;
vi vis;

int main()
{
    int n,m,a,b;
    while(scanf("%d", &n)&&n)
    {
        g.assign(n+1, vi());
        vis.assign(n+1, oo);

        scanf("%d", &m);
        while(m--)
        {
            scanf("%d %d", &a, &b);
            g[a].pb(b);
            g[b].pb(a);
        }

        queue<int> q;
        q.push(0); vis[0]=0;
        bool isb = 1;
        while(!q.empty() && isb)
        {
            a = q.front(); q.pop();
            for(int i = 0; i<(int)g[a].size(); ++i)
            {
                b = g[a][i];
                if(vis[b]==oo)
                    vis[b] = !vis[a], q.push(b);
                else if(vis[a]==vis[b])
                {
                    isb=0;
                    break;
                }
            }
        }

        if(isb)
            puts("BICOLORABLE.");
        else
            puts("NOT BICOLORABLE.");
    }

}

