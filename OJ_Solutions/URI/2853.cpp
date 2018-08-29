#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#define MAXN 1123
#define F first
#define S second
using namespace std;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
int row[MAXN], col[MAXN], adj[MAXN][MAXN], k, dx[] = {-1, 0, 1, 0, -1}, n , m;
queue<iii> q;
int bfs() {
    int i, j, scale = 0;
    iii cur;
    while (k) {
        cur = q.front(); q.pop();
        i = cur.F.F, j = cur.F.S;
        scale = cur.S;

        for (int l = 0,a,b; l<4; ++l) {
            a = i+dx[l]*scale;
            b = j+dx[l+1]*scale;
            if (a<0 || b<0 || a>=n || b>=m) continue;
            if(adj[a][b]) --k, adj[a][b] = 0;
        }
        q.push({cur.F, scale+1});
    }
    return scale;
}
int main()
{
    ios::sync_with_stdio(0);
    char x;

    cin >> n >> m;
    for (int i = 0; i<n; ++i) {
        for (int j = 0; j<m; ++j) {
            cin >> x;
            if (x == '@')
                row[i] = col[j] = 1, adj[i][j] = 0, q.push({{i,j}, 0});
            else
                ++k, adj[i][j] = 1;
        }
    }
    int r = 1, c = 1;
    for (int i = 0; i<n && r; ++i) r&=row[i];
    for (int i = 0; i<m && c; ++i) c&=col[i];

    if (r || c)
        cout << bfs() << '\n';
    else
        cout << -1 << '\n';

}

