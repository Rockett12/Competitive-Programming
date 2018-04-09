#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdio>
#define $ ios::sync_with_stdio(0);
#define mp make_pair
#define F first
#define S second
#define MAXN 55
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
queue<ii> q;
vi vis;
int bfs(int n)
{

    q.push(mp(n, 0));
    ii u;
    vis.assign(n+1, 0);
    int x = -1;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(u.F==1)
            x = u.S;
        if(x==-1)
        {
            if(!(u.F&1) && !vis[u.F>>1])
                q.push(mp(u.F>>1, u.S+1)), vis[u.F>>1]=1;
            if(!(u.F%3) && !vis[u.F/3])
                q.push(mp(u.F/3, u.S+1)),vis[u.F/3]=1 ;
            if(!vis[u.F-1])
                q.push(mp(u.F-1, u.S+1)),vis[u.F-1]=1;
        }
    }

    return x;


}

int main()
{
    int n, f;
    scanf("%d", &n);
    for(int i = 1; i<=n; ++i)
    {
        scanf("%d", &f);
        printf("Case %d: %d\n", i, bfs(f));
    }
}

