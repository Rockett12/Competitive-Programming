#include <cstdio>
#include <vector>
#define $ ios::sync_with_stdio(0);
#include <iostream>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;

int mat[50][50], TC = 0,n, seen[50];

bool dfs(int u, string b)
{
    bool f = 0;
    seen[u] = TC;

    for(int i = 0; i<n; ++i)
    {
        if(mat[u][i]==TC)
        {
            f = 1;
            if(seen[i]<TC)
            {
                cout<<b<<u<<'-'<<i<<" pathR(G,"<<i<<")"<<endl;
                dfs(i, b+"  ");
            }
            else
                cout<<b<<u<<'-'<<i<<'\n';
        }
    }

    return f;
}

int main(){$
    int m, t,u,v;
    cin>>t;
    while(t--)
    {
        ++TC;
        cin>>n>>m;
        while(m--)
        {
            cin>>u>>v;
            mat[u][v] = TC;
        }

        cout<<"Caso "<<TC<<":\n";
        for(int i = 0; i<n; ++i)
        {
            if(seen[i]<TC)
            {
                if(!dfs(i, "  ")) continue;
                cout<<endl;
            }
        }

    }
}

