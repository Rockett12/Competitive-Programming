#include <map>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include <algorithm>
#define S second
#define F first
#define $ ios::sync_with_stdio(0);
#define pb push_back
#define oo 999999999
#define MAXN 112345
using namespace std;
typedef map<int, int> mii;
typedef long long int ll;
typedef pair<int, string> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
int main()
{$
    int n,m, a, b, c, k;
    string s;
    vi v;
    while(cin>>n>>m)
    {
        v.clear();
        while(n--)
            cin>>b,v.pb(b);

        k = 0;
        for(int i = (int)v.size()-1; i>=0 && m--; --i)
            k+=v[i];

        cout<<k<<endl;
    }
}
