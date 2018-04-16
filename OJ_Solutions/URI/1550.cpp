#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <sstream>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define mp make_pair
#define MAXN 11234
using namespace std;
typedef pair<int,int> ii;
int vis[MAXN], TC=0;
stringstream ss;
string s;
queue<ii> q;
int bfs(int o, int d)
{
    vis[o]=TC;
    q.push(mp(o, 0));
    ii u;
    int x = -1;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(u.F == d)
            x = u.S;
        if(x==-1)
        {
            if(u.F+1 <10000 && vis[u.F+1]!=TC)
                vis[u.F+1]=TC, q.push(mp(u.F+1, u.S+1));
            ss.clear();
            ss<<u.F;
            ss>>s;
            reverse(s.begin(), s.end());
            ss.clear();
            ss<<s;
            ss>>u.F;
            if(u.F<10000 && vis[u.F]!=TC)
                vis[u.F]=TC, q.push(mp(u.F,u.S+1));
        }
    }

    return x;
}

int main()
{$
    int n, m,a,b;
    cin>>n;
    while(n--)
    {
        ++TC;
        cin>>a>>b;
        m = bfs(a,b);
        cout<<m<<"\n";
    }
}
