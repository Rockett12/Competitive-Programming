#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 212
using namespace std;

int mat[MAXN][MAXN], dx[] = {-1,0,1,0,-1}, vis[MAXN][MAXN],n,m;
typedef pair<int,int> ii;
queue<ii> q;

int bfs(ii u)
{
    vis[u.F][u.S] = 1;
    int ans = 1, j, k;
    q.push(u);

    while(!q.empty())
    {
        u = q.front(); q.pop();
        for(int i = 0; i<4 ; ++i)
        {
            j = u.F + dx[i];
            k = u.S + dx[i+1];

            if(j<0 || k<0 || j>=n || k>=m) continue;

            if(!vis[j][k] && mat[j][k]==mat[u.F][u.S])
                q.push(ii(j,k)), vis[j][k]=1, ++ans;
        }
    }

    return ans;
}

int main()
{$
    int ans=99999999;
    cin>>n>>m;
    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            cin>>mat[i][j];

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            if(!vis[i][j])
                ans = min(ans,bfs(ii(i,j)));

    cout<<ans<<"\n";
}

