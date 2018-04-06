#include <iostream>
#include <vector>
#include <queue>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define MAXN 55
#define mp make_pair
using namespace std;
char mat[MAXN][MAXN];

typedef pair<int,int> ii;
queue<ii> q;
int dx[] = {1,0,-1,0,1};

void bfs(ii u){
	q.push(u);
	ii v;

	while(!q.empty())
    {
		u = q.front(); q.pop();
		for(int i = 0; i<4; ++i )
		{
			v.F = u.F+dx[i];
			v.S = u.S + dx[i+1];
			if(mat[v.F][v.S]=='A')
				mat[v.F][v.S] = 'T', q.push(v);
		}
	}


}
int main()
{$
	int n , m;

	while(cin>>n>>m && n)
    {
		for(int i = 0; i<=m+1; ++i)
			mat[0][i] = mat[n+1][i] = 'T';
		for(int i = 0; i<=n+1; ++i)
			mat[i][0] = mat[i][m+1] = 'T';

		for(int i = 1; i<=n; ++i)
			for(int j = 1; j<=m; ++j)
				cin>>mat[i][j];

		for(int i = 1; i<=n; ++i)
			for(int j = 1; j<=m; ++j)
				if(mat[i][j]=='T')
					bfs(ii(i,j));

		for(int i = 1; i<=n; ++i)
        {
			for(int j = 1; j<=m; ++j)
                cout<<mat[i][j];
			cout<<"\n";
		}

		cout<<"\n";
	}

}
