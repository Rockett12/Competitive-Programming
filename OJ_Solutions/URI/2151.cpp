#include <cstdio>
#include <queue>
#define MAXN 105
#define F first
#define S second
using namespace std;
int mat[MAXN][MAXN], dx[]={-1,0,1,0,-1,-1,1,1,-1}, vis[MAXN][MAXN], TC=0;
typedef pair<int, int > pp;
typedef pair<int, pp>ii;

int main()
{
    int m, n, x, y, t, add, a, b;
    ii v;
    for(int i =0; i<=100; ++i)
        mat[i][0] = mat[0][i]= -1;

    scanf("%d", &t);
    queue<ii> q;
    while(t--)
    {
        scanf("%d %d %d %d", &m, &n, &x, &y);
        q.push(ii(10, pp(x,y)));

        ++TC;
        for(int i =1; i<=m; ++i)
            for(int j = 1; j<=n; ++j)
                scanf("%d", &mat[i][j]);

        for(int i =0; i<=n+1; ++i)
            mat[m+1][i]=-1;

        for(int i =0; i<=m+1; ++i)
            mat[i][n+1]=-1;


        while(!q.empty())
        {
            v = q.front(); q.pop();
            x = v.S.F;
            y = v.S.S;
            add = v.F;
            mat[x][y]= min(mat[x][y]+add, 100);
            vis[x][y]=TC;
            for(int i = 0; i<8; ++i)
            {
                a = x+dx[i];
                b = y+dx[i+1];
                if(mat[a][b]!=-1 && vis[a][b]!=TC)
                {
                    q.push(ii(max(add-1, 1), pp(a,b)));
                    vis[a][b]=TC;
                }
            }
        }

        printf("Parede %d:\n", TC);
        for(int i =1; i<=m; ++i)
            for(int j = 1; j<=n; ++j)
                printf("%d%s", mat[i][j], j==n?"\n":" ");



    }
}

