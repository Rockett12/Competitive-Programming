#include <iostream>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 1123
#define mp make_pair
char mat[MAXN][MAXN];
using namespace std;
typedef pair<int,int> ii;
queue<ii> q;
int dx[] = {1,0,-1,0,1}, n, m;
int bfs()
{
    int ans=0, a, b;
    ii u;
    while(!q.empty())
    {
        u = q.front(); q.pop();

        for(int i = 0; i<4; ++i)
        {
            a = u.F +dx[i];
            b = u.S +dx[i+1];
            if(a<0 || b<0 || a>n || b>m) continue;

            if(mat[a][b]=='.')
                q.push(mp(a,b));
            else if(mat[a][b]=='#')
                ans++;

            mat[a][b]='a';
        }
    }

    return ans;
}
int main()
{$
    int ans=0;
    cin>>n>>m;

    for(int i = 0; i<=n+1; ++i)
        mat[i][0] = mat[i][m+1] = '.';
    for(int i = 0; i<=m+1; ++i)
        mat[0][i] = mat[n+1][i] = '.';


    for(int i =1 ; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            cin>>mat[i][j];
    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=m+1; ++j)
            if(mat[i][j]=='.')
            {
                mat[i][j]='a';
                q.push(mp(i,j));
                ans+=bfs();
            }

    cout<<ans<<endl;


}

