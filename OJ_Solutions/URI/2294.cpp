#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#define F first
#define S second
#define MAXN 15
using namespace std;
int mat[MAXN][MAXN], vis[MAXN][MAXN], dx[] = {-1,0,1,0,-1}, n ,m;
typedef pair<int,int> ii;
queue<ii> q, resp;
void bfs()
{
    ii u;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        for(int k = 0,x,y,a,b; k<4; ++k)
        {
            a = u.F+dx[k];
            b = u.S+dx[k+1];
            if(a<0 || b<0 || a>=n || b>=m) continue;

            if(!vis[a][b] && mat[a][b]!=2)
                vis[a][b] = vis[u.F][u.S]+1, q.push(ii(a,b));
        }
    }
}

int main()
{

    scanf("%d %d", &n, &m);

    for(int i = 0; i<n; ++i)
        for(int j = 0, x; j<m; ++j)
        {
            scanf("%d", &mat[i][j]);
            if((x = mat[i][j])==3)
                q.push(ii(i,j));
            else if (!x)
                resp.push(ii(i,j));
        }

    bfs();
    int minor = 9999;
    ii u;
    while(!resp.empty())
    {
        u = resp.front(); resp.pop();
        if((n = vis[u.F][u.S]) && n<minor)
            minor = n;
    }

    printf("%d\n", minor);

}

