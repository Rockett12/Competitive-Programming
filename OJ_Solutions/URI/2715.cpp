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
#define oo 999999999999999
#define MAXN 1123456
using namespace std;
typedef map<int, int> mii;
typedef long long int ll;
typedef pair<int, string> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
ll v[MAXN], sum[MAXN];
int main()
{$
    int n,m, a, b, c, k;
    string s;
    ll  resp, soma, x;

    while(cin>>n)
    {
        for(int i = 1; i<=n; ++i)
            cin>>v[i],sum[i]+=sum[i-1] + v[i];

        resp = oo;
        for(int i = 1; i<=n; ++i)
            if((x= abs(sum[n]-2*sum[i]))<resp)
                resp = x;

        cout<<resp<<endl;

        for(int i = 1; i<=n; ++i)
            sum[i] = 0;
    }
}

