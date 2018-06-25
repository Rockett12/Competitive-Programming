#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#define $ ios::sync_with_stdio(0);
#define MAXN 50

using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
int seen[MAXN], TC = 0;
set<int> ans;
void dfs(int s)
{
    seen[s] = TC;
    ans.insert(s);
    for(int i : g[s])
        if(seen[i]<TC)
            dfs(i);
}
int main()
{$
    int t,n , m;
    char x, c;
    cin>>t;
    while(t--)
    {
        ++TC;
        cin>>n>>m;
        g.assign(n+1, vi());

        while(m--)
        {
            cin>>x>>c;
            g[(int)x-'a'].push_back((int)c-'a');
            g[(int)c-'a'].push_back((int)x-'a');
        }

        cout<<"Case #"<<TC<<":\n";
        m = 0;
        for(int i = 0; i<n; ++i)
        {
            if(seen[i]<TC)
            {
                m++;
                ans.clear();
                dfs(i);
                for(auto j : ans)
                    cout<<(char)(j+'a')<<',';
                cout<<'\n';
            }

        }
        cout<<m<<" connected components\n\n";

    }
}
