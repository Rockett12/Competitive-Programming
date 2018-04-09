#include <iostream>
#include <queue>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define mp make_pair
#define MAXN 1123
using namespace std;
typedef pair<int,int> ii;
typedef pair<ii,int> pp;

queue<pp> q;
int mat[MAXN][MAXN], vis[MAXN][MAXN], TC=0, UD = 0,dx[] = {-1,0,1,0,-1}, n, m;

ii bfs(ii o)
{
    q.push(mp(o,0));
    ii d(999999, 999999);
    pp u;
    int x = 999999999;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(mat[u.F.F][u.F.S]==UD)
        {
            if(u.S<x)
                d = u.F, x = u.S;
            else if(u.S==x)
            {
                if(u.F.F==d.F && u.F.S < d.S || u.F.F < d.F)
                        d = u.F;
            }

        }

        if(x==999999999)
        {
            for(int i = 0;i<4; ++i)
            {
                o = mp(u.F.F+dx[i], u.F.S+dx[i+1]);
                if(o.F<1 || o.S<1 || o.F>n || o.S>m) continue;

                if(vis[o.F][o.S]!=TC)
                {
                    q.push(mp(o, u.S+1));
                    vis[o.F][o.S] = TC;
                }
            }
        }

    }

    return d;
}

int main()
{$
    int a, b,k;
    ii x;

    while(cin>>n>>m && n)
    {
        --UD;
        if(TC)
            cout<<"\n";
        cin>>k;
        while(k--)
        {
            cin>>a>>b;
            mat[a][b]=UD;
        }

        cin>>k;
        cout<<"Instancia "<<-UD<<"\n";
        while(k--)
        {
            cin>>a>>b;
            ++TC;
            x = bfs(mp(a,b));
            cout<<x.F<<" "<<x.S<<"\n";

        }
    }
}
