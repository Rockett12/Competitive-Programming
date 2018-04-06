#include <iostream>
#include <vector>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 1200
#define mp make_pair
using namespace std;
char mat[MAXN][MAXN];
typedef pair<int,int> ii;
int dx [] = {1,0,-1,0,1};
queue<ii> q;

void bfs(ii a)
{
	ii u;
	int  x, y;
	mat[a.F][a.S]='o';
	q.push(a);

	while(!q.empty())
    {
		u = q.front(); q.pop();
		for(int i = 0; i<4; ++i)
        {
			x = u.F + dx[i];
			y = u.S + dx[i+1];
			if(mat[x][y]=='.')
				q.push(mp(x,y)), mat[x][y]='o';
		}
	}
}

int main()
{
	int a, b, ans=0;
	cin>>a>>b;
	for(int i = 1; i<=a; ++i)
		for(int j = 1 ; j<=b; ++j)
			cin>>mat[i][j];

	for(int i = 1; i<=a; ++i)
		for(int j = 1 ; j<=b; ++j)
			if(mat[i][j]=='.')
				++ans, bfs(mp(i,j));

	cout<<ans<<"\n";
}
