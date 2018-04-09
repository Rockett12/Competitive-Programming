#include <iostream>
#include <queue>
#include <algorithm>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 321
using namespace std;
int lob = 0, ov = 0, dx [] = {-1,0,1,0,-1}, n, m;
char mat[MAXN][MAXN];
typedef pair<int,int> ii;
queue<ii> q;
char c;
void bfs(ii u)
{
    int o = 0, w = 0, x, y;

    if((c = mat[u.F][u.S])== 'v')
        ++w;
    else if(c == 'k')
        ++o;

    mat[u.F][u.S]='#';
    q.push(u);
    while(!q.empty())
    {
        u = q.front(); q.pop();
        for(int i =0; i<4; ++i)
        {
            x = u.F + dx[i];
            y = u.S + dx[i+1];

            if(x<0 || y<0 || x>=n || y>=m) continue;

            if((c=mat[x][y])!='#')
            {
                if(c == 'k')
                    ++o;
                else if(c == 'v')
                    ++w;

                q.push(ii(x,y));
            }
            mat[x][y] = '#';
        }
    }

    if(o>w)
        ov+=o;
    else
        lob+=w;
}

int main()
{$
    cin>>n>>m;

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            cin>>mat[i][j];

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j)
            if(mat[i][j]!='#')
                bfs(ii(i,j));

    cout<<ov<<" "<<lob<<"\n";
}

