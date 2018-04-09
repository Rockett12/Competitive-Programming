#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define oo 999999999
#define MAXN 112345
using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;
char mat[25][25];
queue<ii> q;
int n , m;
set<string> ss;
void bfs()
{
    int x;
    ii u;
    string s;
    while(!q.empty())
    {
        u = q.front(); q.pop();

        s = "";
        x = u.F+1;
        while(x<n && mat[x][u.S]!='#')
                s+=mat[x++][u.S];

        if(s!="")
            ss.insert(s);


        s = "";
        x = u.S+1;
        while(x<m && mat[u.F][x]!='#')
            s+=mat[u.F][x++];

        if(s!="")
            ss.insert(s);

    }
}
int main()
{$
    int a,b,c,d;
    cin>>n>>m;

    string s;
    int f = 1;
    for(int i = 0; i<n; ++i)
    {
        for(int j = 0; j<m; ++j)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='#')
                q.push(ii(i,j));
        }

    }
    int x;
    for(int i = 0; i<n; ++i)
    {
        s = "";
        x = 0;
        while(x<m && mat[i][x]!='#')
            s+=mat[i][x++];
        if(s!="")
            ss.insert(s);
    }
    for(int i = 0; i<m; ++i)
    {
        s = "";
        x = 0;
        while(x<n && mat[x][i]!='#')
            s+=mat[x++][i];

        if(s!="")
            ss.insert(s);
    }
    bfs();
    set<string>::iterator it = ss.begin();

    for(it; f &&  it!=ss.end(); ++it)
    {
        if(((int)it->size())>=2)
            cout<<*it<<"\n", f = 0;
    }

}


