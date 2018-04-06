#include <iostream>
#include <vector>
#include <queue>
#define F first
#define S second
#define MAXN 112
#define mp make_pair

using namespace std;
typedef pair<int,int> ii;
int dx[] = {-1,0,1,0,-1,1,1,-1,-1};
queue<ii> q;
char mat[MAXN][MAXN];
void bfs(int x, int y){
	ii u;
	int a, b;
	q.push(mp(x,y));
	mat[x][y] = '*';
	while(!q.empty())
    {
		u = q.front(); q.pop();
		for(int i = 0; i<8; ++i)
		{
			a = u.F + dx[i];
			b = u.S + dx[i+1];
			if(mat[a][b]=='@')
				mat[a][b] = '*', q.push(mp(a,b));
		}

	}

}


int main(){
	int n, m, ans;
	while(cin>>n>>m && n)
    {
		ans = 0;
		for(int i = 0; i<=n+1; ++i)
			mat[i][0] = mat[i][m+1] = '*';
		for(int i = 0; i<=m+1; ++i)
			mat[0][i] = mat[n+1][i] = '*';

		for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
				cin>>mat[i][j];

		for(int i = 1; i<=n; ++i)
			for(int j = 1; j<=m; ++j)
				if(mat[i][j]=='@')
					++ans, bfs(i, j);

		cout<<ans<<"\n";
	}
}
