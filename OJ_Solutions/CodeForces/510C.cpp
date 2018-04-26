#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
#include <algorithm>
#define pb push_back
#define $ ios::sync_with_stdio(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
priority_queue<int> pq;
int dg[30];
int main()
{$
    int n , m, k;
    vector<string> v;
    string s;
    g.assign(30, vi());
    char last, x;
    bool f = 1;
    cin>>n>>s;
    last = s[0];
    v.pb(s);

    for(int i = 0; i<n-1; ++i)
    {
        cin>>s;
        v.pb(s);
        x = s[0];
        if(last^x)
        {
            g[last-'a'].pb(x-'a');
            ++dg[x-'a'];
        }
        last = x;
    }

    for(int i = 0, j; f && i+1<(int)v.size(); ++i)
    {
        if(v[i][0]==v[i+1][0])
        {
            j = 1;
            k = min(n = (int)v[i].size(), m = (int)v[i+1].size());
            while(j<k && v[i][j]==v[i+1][j]) ++j;

            if(j<k)
            {
                last = v[i][j];
                x = v[i+1][j];
                g[last-'a'].pb(x-'a');
                ++dg[x-'a'];
            }
            else if(n>m)
                f = 0;
        }
    }

    for(int i = 0;f && i<26; ++i)
        if(!dg[i])
            pq.push(-i);

    s = "";
    while(!pq.empty() && f)
    {
        n = -pq.top(); pq.pop();
        s+=(char)n+'a';

        for(int i = 0; i<(int)g[n].size(); ++i)
        {
            m = g[n][i];
            if(--dg[m]==0)
                pq.push(-m);
        }
    }

    if((int)s.size()==26)
        cout<<s<<'\n';
    else
        cout<<"Impossible\n";
}
