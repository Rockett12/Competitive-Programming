#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <map>
#include <iostream>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define mp make_pair
#define INF 0x3f3f3f3f
#define MAXN 1123
using namespace std;
typedef pair<int, pair<string, int> > ii;

vector<int> v, t;
int main()
{$

    int n, m, a,b,c,u,w;
    cin>>n;
    v.resize(n);
    t.resize(n);

    for(auto& i : v)
        cin>>i;
    for(auto& i : t)
        cin>>i;

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    int cnt = 0;

    for(int i = 0, j = 0; i<(int)v.size() && j<(int)t.size();++j)
    {
        if(v[i]<t[j])
            ++cnt, ++i;
    }

    cout<<cnt<<'\n';
}
