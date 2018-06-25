#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#define MAXN 412345
#define $ ios::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define F first
#define S second
using namespace std;
typedef pair<char, int> ii;
int p[MAXN];
int main()
{$
    set<int> ss;
    int n , m , ans = 0;
    string s;
    cin>>n>>m>>s;
    vector<ii> v;

    for(int i = 0; i<n; ++i)
        v.push_back({s[i], i});

    sort(v.begin(), v.end());

    for(int i = 0; i<m; ++i)
        p[v[i].S] = 1;

    for(int i = 0; i<n; ++i)
    {
        if(p[i])
            continue;
        cout<<s[i];
    }

    cout<<endl;
}

