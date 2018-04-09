#include <iostream>
#include <queue>
#include <vector>
#define MAXN 100000
#define MAXM 1000
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
queue<ii> q;
int vis[MAXN+10+MAXM], TC=0;
int bfs(int n, int m)
{
    q.push(mp(n,0));
    ii u;
    int x = -1;

    while(!q.empty())
    {
        u = q.front(); q.pop();

        if(u.F==m && x==-1)
            return u.S;

        if(x==-1)
        {
            if(u.F-7+MAXM>=0 && vis[u.F-7+MAXM]!=TC)
                q.push(mp(u.F-7, u.S+1)), vis[u.F-7+MAXM]=TC;

            if(u.F+7+MAXM<=MAXN && vis[u.F+7+MAXM]!=TC)
                q.push(mp(u.F+7, u.S+1)), vis[u.F+7+MAXM]=TC;

            if((u.F<<1)+MAXM<=MAXN && vis[(u.F<<1)+MAXM]!=TC)
                q.push(mp(u.F<<1, u.S+1)), vis[(u.F<<1)+MAXM]=TC;

            if((u.F>>1)+MAXM>=0 && vis[(u.F>>1)+MAXM]!=TC)
                q.push(mp(u.F>>1, u.S+1)), vis[(u.F>>1)+MAXM] = TC;

            if(u.F*3+MAXM<=MAXN && vis[u.F*3+MAXM]!=TC)
                q.push(mp(u.F*3, u.S+1)), vis[u.F*3+MAXM]=TC;

            if(u.F/3+MAXM>=0 && vis[u.F/3+MAXM]!=TC)
                q.push(mp(u.F/3, u.S+1)), vis[u.F/3+MAXM]=TC;
        }
    }

    return x;
}

int main()
{$
    int o,d,k,m,n;
    cin>>n>>m;
    ++TC;
    cout<<bfs(n,m)<<"\n";

}

