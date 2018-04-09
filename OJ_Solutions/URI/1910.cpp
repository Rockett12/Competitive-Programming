#include <iostream>
#include <queue>
#include <vector>
#define MAXN 100000
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
queue<ii> q;
int vis[MAXN+10], TC=0;
int bfs(int o, int d)
{
    q.push(mp(o,0));
    ii u;
    int x = -1;

    while(!q.empty())
    {
        u = q.front(); q.pop();

        if(u.F==d && x==-1)
            x = u.S;

        if(x==-1)
        {
            if(u.F-1 && vis[u.F-1]!=TC)
                q.push(mp(u.F-1, u.S+1)), vis[u.F-1]=TC;

            if(u.F+1<=MAXN && vis[u.F+1]!=TC)
                q.push(mp(u.F+1, u.S+1)), vis[u.F+1]=TC;

            if((u.F<<1)<=MAXN && vis[u.F<<1]!=TC)
                q.push(mp(u.F<<1, u.S+1)), vis[u.F<<1]=TC;

            if(u.F*3<=MAXN && vis[u.F*3]!=TC)
                q.push(mp(u.F*3, u.S+1)), vis[u.F*3]=TC;

            if(!(u.F&1) && (u.F>>1) && vis[u.F>>1]!=TC)
                q.push(mp(u.F>>1, u.S+1)), vis[u.F>>1] = TC;
        }
    }

    return x;
}

int main()
{$
    int o,d,k,n;
    while(cin>>o>>d>>k && o)
    {
        ++TC;
        while(k--)
        {
            cin>>n;
            vis[n]=TC;
        }
        cout<<bfs(o,d)<<"\n";
    }
}
