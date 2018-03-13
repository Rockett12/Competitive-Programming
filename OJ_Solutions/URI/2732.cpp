#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>
#define MAXN 405
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
char mat[MAXN][MAXN];
int dx[] = {1,0,-1,0,1}, sum;
queue<ii> q;

int bfs(int i, int j)
{
    sum =1;
    mat[i][j]='.';
    q.push(ii(i,j));
    ii cas;
    int x, y;
    while(!q.empty())
    {
        cas = q.front();
        q.pop();
        for(int i = 0; i<4; ++i)
        {
            x = cas.F+dx[i];
            y = cas.S+dx[i+1];

            if(mat[x][y]=='C')
                mat[x][y]='.', q.push(ii(x,y)), ++sum;
        }
    }

    return sum;


}

int main()
{$
    int n, m,resp=0;

    cin>>n>>m;

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            cin>>mat[i][j];
    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
        {
            if(mat[i][j]=='C')
                resp = max(bfs(i, j), resp);
        }

    cout<<resp<<endl;
}
