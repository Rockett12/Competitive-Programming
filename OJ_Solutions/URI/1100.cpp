#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define mp make_pair

using namespace std;
typedef pair<int,int> ii;
typedef pair<ii, int> ks;
queue<ks> q;
int mat[80][80], TC=0, dx [] = {-2,1,2,-1,2,1,-2,-1,-2};
int bfs(ii o, ii d)
{
    q.push(mp(o, 0));
    ks u;
    int x = -1;
    while(!q.empty())
    {
        u = q.front(); q.pop();
        if(u.F == d && x==-1)
            x = u.S;
        if(x==-1)
        {
            for(int i = 0; i<8; ++i)
            {
                o = mp(u.F.F+dx[i], u.F.S+dx[i+1]);
                if(o.F<0 || o.S<0 || o.F>=8 || o.S>=8) continue;

                if(mat[o.F][o.S]!=TC)
                {
                    mat[o.F][o.S]=TC;
                    q.push(mp(o, u.S+1));
                }
            }
        }
    }

    return x;
}
int main()
{
    string a, b;
    int i;
    while(cin>>a>>b)
    {
        ++TC;
        i = bfs(mp(a[0]-'a', a[1]-'1'), mp(b[0]-'a', b[1]-'1'));
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<i<<" knight moves.\n";
    }

}

