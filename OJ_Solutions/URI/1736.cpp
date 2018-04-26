#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <cstdio>
#include <queue>
#include <stack>
#define $ ios::sync_with_stdio(0);
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
int dg[100];
graph g;
void dfs(int u)
{
    cout<<'('<<u;

    int m ;
    for(int j = 0; j<(int)g[u].size(); ++j)
    {
        m = g[u][j];
        cout<<' ';
        dfs(m);
    }
    cout<<')';
}
int main()
{$
    string s;
    int i, j, pai, filho, n;
    priority_queue<int, vi, greater<int> > pq;
    stringstream ss;
    queue<int> q;

    while(getline(cin ,s))
    {
        if(s=="")
        {
            cout<<"(1)\n";
            continue;
        }

        ss.clear();
        ss<<s;

        while(ss>>n)
            q.push(n), ++dg[n];

        g.assign(n+1, vi());

        for(int i = 1; i<n; ++i)
            if(!dg[i])
                pq.push(i);

        while(!pq.empty())
        {
            filho = pq.top(); pq.pop();

            if(!q.empty())
                pai = q.front(), q.pop();
            else
                continue;

            g[pai].pb(filho);
            if(--dg[pai]==0)
                pq.push(pai);
        }
        dfs(n);
        cout<<'\n';
    }
}

