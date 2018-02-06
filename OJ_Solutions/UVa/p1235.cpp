#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define F first
#define S second
#define MAXN 505
#define PB push_back
#define _ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int ,int> ii;
//typedef pair<int, pi> ii
typedef vector<ii> vi;
typedef vector<vi> graph;

graph g;
int vis[MAXN], TC =0, n, mat[11][11], f, ini;
vector<string> vs(MAXN);
priority_queue<ii> pq;

void init()
{
    for(int i = 0; i<10; ++i)
    {
        for(int j = i; j<10; ++j)
        {
                mat[j][i] = mat[i][j] = (j-i)>5?(10+i-j):(j-i);
        }

    }

}

void calc()
{
    string a, b;
    int w;
    ini = 99999;
    for(int i = f; i<=n; ++i)
    {
        a = vs[i];
        w = 0;
        for(int k = 0; k<4; ++k)
                w+=mat[0][a[k]-'0'];
        ini=min(ini, w);
        for(int j = i+1; j<=n; ++j)
        {
            b = vs[j];
            w = 0;
            for(int k = 0; k<4; ++k)
                w+=mat[b[k]-'0'][a[k]-'0'];

            g[i].PB(ii(w, j));
            g[j].PB(ii(w, i));
        }
    }
}

void process(int v)
{
    vis[v]=TC;
    ii u;
    for(int i =0; i<(int)g[v].size(); ++i)
    {
        u = g[v][i];
        if(vis[u.S]!=TC)
            pq.push(ii(-u.F, -u.S));
    }
}

int main()
{_
    int t, cost;
    ii u;
    init();
    cin>>t;

    vs[0]="0000";
    while(t--)
    {
        ++TC;
        cin>>n;
        g.clear();
        g.assign(n+3, vi());
        f=1;
        for(int i =1; i<=n ; ++i)
        {
            cin>>vs[i];
            if(vs[i]=="0000")
                f=0;
        }

        calc();


        process(f);

        cost = 0;
        if(f)
            cost+=ini;
        while(!pq.empty())
        {
            u = pq.top(); pq.pop();
            if(vis[-u.S]!=TC)
                cost+=(-u.F), process(-u.S);
        }

        cout<<cost<<endl;

    }
}





