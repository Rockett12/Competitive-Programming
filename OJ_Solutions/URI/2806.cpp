#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef map<string, int> mp;
graph g;
vi ans;
int tip[112345];

int dfs(int s)
{
    int ans = 0;
    for(auto i : g[s])
    {
        if(!tip[i])
            ans+=dfs(i);
        else if(tip[i]&1)
            ans++;
    }
    if(!tip[s]){

        if(ans > (int)g[s].size()/2)
            tip[s] = 1;
        else
            tip[s] = 2;
    }

    return tip[s] == 1? 1 :0 ;
}
int main()
{$
    string s, ss;
    int n, m, cnt = 1, v, w;
    mp din;
    cin>>n;
    for(int i = n; i--;)
    {
        cin>>s;
        if(!(v = din[s]))
            din[s] = v = cnt++;
        tip[v] = 1;
    }

    cin>>m;
    g.assign(m*51+n+1, vi());

    while(m--)
    {
        cin>>s>>n;
        if(! (v = din[s]))
            din[s] = v = cnt++;
        ans.push_back(v);

        while(n--)
        {
            cin>>ss;
            if(!(w = din[ss]))
                din[ss] = w = cnt++;
            g[v].push_back(w);
        }

    }

    for(int i: ans)
    {
        if(!tip[i])
            dfs(i);
        if(tip[i]&1)
            cout<<"porcao tipica\n";
        else
            cout<<"porcao comum\n";
    }
}
