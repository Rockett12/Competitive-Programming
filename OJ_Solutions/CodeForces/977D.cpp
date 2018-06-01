#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <sstream>
#include <map>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define mp make_pair
#define pb push_back
#define MAXN 212345
#define oo 999999999
using namespace std;
typedef unsigned long long int ll;
typedef pair<ll, int> ii;
typedef vector<ll> vi;
typedef vector<vi> graph;
graph g;
int dg[105], vai[105];
set<ii> s;
ll v[105];
int main()
{$
    int n, m;
    cin>>n;
    ll a, b;
    for(int i =1; i<=n; ++i)
        cin>>v[i];

    for(int i = 1;i<=n; ++i)
        for(int j = i+1;j<=n; ++j)
            if(v[i]%2LL==0LL && ((v[i]/2LL) == v[j]) || v[j]%3LL==0LL && (v[j]/3LL == v[i]))
                vai[j]=i, ++dg[i];
            else if(v[j]%2LL==0LL && ((v[j]/2LL) == v[i]) || v[i]%3LL==0LL && (v[i]/3LL == v[j]))
                vai[i]=j, ++dg[j];

    bool f = 1;
    for(int i = 1, prox; i<=n && f; ++i)
        if(!dg[i])
        {
            cout<<v[i];
            prox = vai[i];

            while(v[prox])
            {
                cout<<' '<< v[prox];
                prox = vai[prox];
            }
            cout<<'\n';
            f = 0;
        }
}
